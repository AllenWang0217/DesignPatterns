#pragma once
#include "Component.h"

class Composite :public Component//添加分支结点（即非叶子结点）  
{
private:
	list<Component*> child;//孩子  
public:
	Composite() {}//基类Component调用其默认的构造函数  
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
			(*iter)->Display(depth + 1);//递归遍历  
			iter++;
		}
	}
};