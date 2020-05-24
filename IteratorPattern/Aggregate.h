#pragma once

#include "Iterator.h"

template<class Item>
class Aggregate {
public:
    Aggregate() {};
    virtual ~Aggregate() {};

    virtual void push_back(Item item) = 0;
    virtual Iterator<Item>* createIterator() = 0;
    virtual Item& operator[](int index) = 0;
    virtual int size() = 0;
};
