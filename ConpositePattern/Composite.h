#pragma once
#include "Component.h"

class Composite :public Component//��ӷ�֧��㣨����Ҷ�ӽ�㣩  
{
private:
	list<Component*> child;//����  
public:
	Composite() {}//����Component������Ĭ�ϵĹ��캯��  
	Composite(string name) :Component(name) {}
	void Add(Component *c)
	{
		child.push_back(c);
	}
	void Remove(Component *c)
	{
		child.remove(c);
	}
	void Display(int depth)
	{
		cout << string(depth, '-') << name << endl;
		list<Component*>::iterator iter = child.begin();
		while (iter != child.end())
		{
			(*iter)->Display(depth + 1);//�ݹ����  
			iter++;
		}
	}
};