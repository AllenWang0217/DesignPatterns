#pragma once
#include "Component.h"

class Leaf :public Component
{
public:
	Leaf(string name) :Component(name) {}//调用基类的构造函数初始化派生类的基类部分  
	void Add(Component* c)
	{
		cout << "不能向叶子结点添加部件!" << endl;
	}
	void Remove(Component* c)
	{
		cout << "不能从叶子结点删除部件!" << endl;
	}
	void Display(int depth)
	{
		cout << string(depth, '-') << name << endl;
	}
};