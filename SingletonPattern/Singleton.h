#pragma once

#include <thread>         // std::thread
#include <mutex>          // std::mutex, std::lock

std::mutex singleton;

/*�ڲ���̬����������ʵ��,�޷��ֶ�����ʵ��*/

class Singleton
{
protected:
Singleton() {}
public:
static Singleton* getInstance();
};

Singleton* Singleton::getInstance()
{
singleton.lock();
static Singleton sing;
singleton.unlock();
return &sing;
}

/*����ļ�������ʵ�֣��Ϸ��������ֶ�����ʵ��*/
/*
class Singleton
{
protected:
	Singleton() {}
private:
	static Singleton* sing;
public:
	static Singleton* getInstance();
	static void destoryInstance();
};

Singleton* Singleton::sing = NULL;
Singleton* Singleton::getInstance()
{
	if (sing == NULL)
	{
		singleton.lock();
		if (sing == NULL)
			sing = new Singleton();
		singleton.unlock();
	}
	return sing;
}

void Singleton::destoryInstance()
{
	if (sing == NULL)
	{
		singleton.lock();
		if (sing == NULL) {
			delete sing;
			sing = NULL;
		}
		singleton.unlock();
	}
}
*/
/*����ʵ�֣�ʵ�ּ򵥣����˷��˿ռ䣬���ֶ�����ʵ��*/
/*
class Singleton
{
protected:
	Singleton()
	{}
private:
	static Singleton* sing;
public:
	static Singleton* getInstance();
	static void destoryInstance();
};
Singleton* Singleton::sing = new Singleton();
Singleton* Singleton::getInstance()
{
	return sing;
}

void Singleton::destoryInstance()
{
	if (sing == NULL)
	{
		singleton.lock();
		if (sing == NULL) {
			delete sing;
			sing = NULL;
		}
		singleton.unlock();
	}
}
*/