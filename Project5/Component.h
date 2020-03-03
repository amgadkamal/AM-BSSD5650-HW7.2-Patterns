#pragma once
#ifndef Component_h
#define Component_h



#include <iostream>
#include <vector>
using namespace std;

// 2. Create an "interface" (lowest common denominator)
class Component
{
public:
    virtual void traverse() = 0;
};
#endif // !