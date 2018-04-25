#pragma once
#include "../ConpositePattern/Composite.h"
#include "../ConpositePattern/Leaf.h"

class TestComposite {
public:
	TestComposite() {
		Composite root("root");
		/****添加root的孩子结点pA****/
		Leaf *pA = new Leaf("Leaf A");
		root.Add(pA);

		/****添加root的孩子结点pB***/
		Leaf *pB = new Leaf("Leaf B");//添加root的孩子pB  
		root.Add(pB);

		/****添加root的分支结点comp***/
		Composite *comp1 = new Composite("Composite X");
		Leaf *pXA = new Leaf("Leaf XA");
		Leaf *pXB = new Leaf("Leaf XB");
		root.Add(comp1);

		/***添加comp1的分支结点comp2****/
		Composite *comp2 = new Composite("Composite XY");
		Leaf *pXYA = new Leaf("Leaf XYA");
		Leaf *pXYB = new Leaf("Leaf XYB");
		comp2->Add(pXYA);
		comp2->Add(pXYB);
		comp1->Add(comp2);
		/***添加root的孩子结点pC和pD****/
		Leaf *pC = new Leaf("Leaf C");
		Leaf *pD = new Leaf("Leaf D");
		root.Add(pC);
		root.Add(pD);
		cout << "显示当前树的结果:" << endl;
		root.Display(1);
		/***删除root的孩子结点pD***/
		cout << "显示删除结点D后的结果:" << endl;
		root.Remove(pD);//注意，只是从树中删除了，并没有从堆中删除  
		root.Display(1);

		/*释放所申请的堆内存空间,C++的麻烦就在此呀，哈哈*/
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