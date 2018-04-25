#pragma once
#include "Component.h"

class Leaf :public Component
{
public:
	Leaf(string name) :Component(name) {}//���û���Ĺ��캯����ʼ��������Ļ��ಿ��  
	void Add(Component* c)
	{
		cout << "������Ҷ�ӽ����Ӳ���!" << endl;
	}
	void Remove(Component* c)
	{
		cout << "���ܴ�Ҷ�ӽ��ɾ������!" << endl;
	}
	void Display(int depth)
	{
		cout << string(depth, '-') << name << endl;
	}
};