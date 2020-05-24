#pragma once
#include "../IteratorPattern/ConcreteAggregate.h"
#include <iostream>

using namespace  std;

struct IntType {
    IntType(int value) : value(value) {};
    int value;
};

struct TestIterator{

    TestIterator()
    {
        //Aggregate<int> * aggr = new ConcreteAggregate<int>();
        //aggr->push_back(3);
        //aggr->push_back(2);
        //aggr->push_back(1);
        //Iterator<int>* it = aggr->createIterator();

        //for (it->begin(); !it->isEnd(); it->operator++())
        //{
        //    std::cout << *(it->operator->()) << std::endl;
        //}

        Aggregate<IntType> * aggr = new ConcreteAggregate<IntType>();
        aggr->push_back(IntType(3));
        aggr->push_back(IntType(2));
        aggr->push_back(IntType(1));
        Iterator<IntType>* it = aggr->createIterator();

        for (it->begin(); !it->isEnd(); it->operator++())
        {
            std::cout << (*it)->value << std::endl;
        }
        delete it;
        delete aggr;
    }
};