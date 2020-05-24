#pragma once

template<class Item>
class Iterator
{
public:
    Iterator() {};
    virtual ~Iterator() {};

    virtual void begin() = 0;
    virtual void next() = 0;
    virtual Iterator<Item>& operator ++ () = 0;
    virtual Item* operator -> () = 0;
    virtual bool isEnd() = 0;
};
