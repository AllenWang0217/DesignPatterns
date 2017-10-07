#pragma once

#include <thread>         // std::thread
#include <mutex>          // std::mutex, std::lock

std::mutex singleton;

/*内部静态变量的懒汉实现,无法手动销毁实例*/

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

/*经典的加锁懒汉实现，较繁琐，能手动销毁实例*/
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
/*饿汉实现，实现简单，但浪费了空间，能手动销毁实例*/
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