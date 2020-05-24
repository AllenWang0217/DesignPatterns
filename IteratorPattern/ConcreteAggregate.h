#pragma once

#include <vector>
#include "Aggregate.h"
#include "ConcreteIterator.h"

using namespace std;

template <class Item>
class ConcreteAggregate : public Aggregate<Item>
{
public:
    ConcreteAggregate() {};
    virtual ~ConcreteAggregate() {};

    virtual void push_back(Item item) { data.push_back(item); };
    virtual Iterator<Item>* createIterator() { return new ConcreteIterator<Item>(this); };
    virtual Item& operator[](int index) { return data[index]; };
    virtual int size() { return data.size(); };
private:
    vector<Item> data;
};
