#pragma once
#pragma once
#ifndef Leaf_h
#define Leaf_h


#include"Component.h"
#include <iostream>
//#include <vector>


//using namespace std;

class Leaf : public Component
{
    // 1. Scalar class   3. "isa" relationship
    int value;
public:
    Leaf(int val)
    {
        value = val;
    }
    void traverse()
    {
        std::cout << value << ' ';
    }
};
#endif