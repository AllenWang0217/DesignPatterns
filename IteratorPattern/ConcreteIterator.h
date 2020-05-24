#pragma once
#include "Iterator.h"
 
template<class Item>
class ConcreteIterator : public Iterator <Item>
{
public:
    ConcreteIterator(Aggregate<Item> *aggr) : aggr(aggr), index(0) {};
    ~ConcreteIterator() {};

    void begin() { index = 0; };
    void next() { if (index < aggr->size()) index++; };
    Iterator<Item>& operator ++ () { if (index < aggr->size()) index++; return *this;};
    Item* operator -> () { return index < aggr->size() ? &(*aggr)[index] : NULL; };
    bool isEnd() { return index >= aggr->size(); };
private:
    Aggregate<Item> *aggr;
    int index;
};
