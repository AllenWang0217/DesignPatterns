#pragma once
#include "../BridgePattern/Square.h"
#include "../BridgePattern/Circle.h"
#include "../BridgePattern/Red.h"
#include "../BridgePattern/Blue.h"
#include "../BridgePattern/Original/ConcreteImplementor1.h"
#include "../BridgePattern/Original/ConcreteImplementor2.h"
#include "../BridgePattern/Original/RefinedAbstraction1.h"
#include "../BridgePattern/Original/RefinedAbstraction2.h"

class TestBridge {
public:
	TestBridge() {
		cout << "Original bridge pattren:" << endl;
		Implementor* impl1 = new ConcreteImplementor1();
		Implementor* impl2 = new ConcreteImplementor2();
		Abstrator* abs1 = new RefinedAbstraction1(impl1);
		Abstrator* abs2 = new RefinedAbstraction2(impl1);
		abs1->operation();
		abs1->setImplementor(impl2);
		abs1->operation();
		abs2->operation();
		abs2->setImplementor(impl2);
		abs2->operation();
		delete impl1, impl2, abs1, abs2;

		cout << "\nAn example of bridge pattren:" << endl;
		Color* red = new Red();
		Color* blue = new Blue();
		Shape* square = new Square();
		square->setColor(red);
		square->draw();
		Shape* circle = new Circle();
		circle->setColor(blue);
		circle->draw();
		delete red, blue, square, circle;
	}
};

