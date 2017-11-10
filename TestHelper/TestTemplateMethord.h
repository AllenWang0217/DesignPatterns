#pragma once
#include "../TemplateMethodPattern/AbstractClass.h"
#include "../TemplateMethodPattern/ConcreteClass1.h"
#include "../TemplateMethodPattern/ConcreteClass2.h"
class TestTemplateMethord {
public:
	TestTemplateMethord(){
		AbstractClass* absClass = new ConcreteClass1();
		absClass->Algorithm();

		std::cout<<std::endl;

		absClass = new ConcreteClass2();
		absClass->Algorithm();
	}
};