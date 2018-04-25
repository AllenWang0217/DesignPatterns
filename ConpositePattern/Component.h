#pragma once

#include<iostream>  
#include<string>  
#include<list>  
using namespace std;

class Component//�����࣬�û�ͨ���ýӿ����������Ӳ���  
{
protected:
	string name;
public:
	Component() {}
	Component(string str) :name(str) {};
	virtual void Add(Component*) = 0;//�����Ӳ���  
	virtual void Remove(Component*) = 0;//ɾ���Ӳ���  
	virtual void Display(int depth) = 0;//������㣬depth��ʾ�������  
};
