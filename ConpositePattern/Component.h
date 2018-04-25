#pragma once

#include<iostream>  
#include<string>  
#include<list>  
using namespace std;

class Component//抽象类，用户通过该接口来访问其子部件  
{
protected:
	string name;
public:
	Component() {}
	Component(string str) :name(str) {};
	virtual void Add(Component*) = 0;//增加子部件  
	virtual void Remove(Component*) = 0;//删除子部件  
	virtual void Display(int depth) = 0;//遍历结点，depth表示结点的深度  
};
