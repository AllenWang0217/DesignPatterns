#pragma once
#pragma once

#include <vector>
#include "Iterator.h"

using namespace std;

template <class Item>
class Container
{
public:
    virtual void push_back(Item item) { data.push_back(item); };
    virtual Iterator<Item>* createIterator() { return new ConcreteIterator<Item>(this); };
    virtual Item& operator[](int index) { return data[index]; };
    virtual int size() { return data.size(); };
    friend class Iterator;
private:
    vector<Item> data;
};
