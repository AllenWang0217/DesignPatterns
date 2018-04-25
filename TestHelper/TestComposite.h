#pragma once
#include "../ConpositePattern/Composite.h"
#include "../ConpositePattern/Leaf.h"

class TestComposite {
public:
	TestComposite() {
		Composite root("root");
		/****���root�ĺ��ӽ��pA****/
		Leaf *pA = new Leaf("Leaf A");
		root.Add(pA);

		/****���root�ĺ��ӽ��pB***/
		Leaf *pB = new Leaf("Leaf B");//���root�ĺ���pB  
		root.Add(pB);

		/****���root�ķ�֧���comp***/
		Composite *comp1 = new Composite("Composite X");
		Leaf *pXA = new Leaf("Leaf XA");
		Leaf *pXB = new Leaf("Leaf XB");
		root.Add(comp1);

		/***���comp1�ķ�֧���comp2****/
		Composite *comp2 = new Composite("Composite XY");
		Leaf *pXYA = new Leaf("Leaf XYA");
		Leaf *pXYB = new Leaf("Leaf XYB");
		comp2->Add(pXYA);
		comp2->Add(pXYB);
		comp1->Add(comp2);
		/***���root�ĺ��ӽ��pC��pD****/
		Leaf *pC = new Leaf("Leaf C");
		Leaf *pD = new Leaf("Leaf D");
		root.Add(pC);
		root.Add(pD);
		cout << "��ʾ��ǰ���Ľ��:" << endl;
		root.Display(1);
		/***ɾ��root�ĺ��ӽ��pD***/
		cout << "��ʾɾ�����D��Ľ��:" << endl;
		root.Remove(pD);//ע�⣬ֻ�Ǵ�����ɾ���ˣ���û�дӶ���ɾ��  
		root.Display(1);

		/*�ͷ�������Ķ��ڴ�ռ�,C++���鷳���ڴ�ѽ������*/
		delete pA;
		delete pB;
		delete comp1;
		delete pC;
		delete pD;
		delete pXA;
		delete pXB;
		delete comp2;
		delete pXYA;
		delete pXYB;
	}
};