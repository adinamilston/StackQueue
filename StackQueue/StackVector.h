#pragma once
#include "Vector.h"        
//-------------------------------------------------------
//  class StackVector
//  Stack implemented using Vector
//  Vector will grow as necessary to avoid overflow
//-------------------------------------------------------
#include "Stack.h"
#include <iostream>
using namespace std;

class StackVector : public Stack
{
public:
    // constructor requires a starting size
    StackVector(unsigned int capacity);
    StackVector(const StackVector& s);

    // Stack operations
    void clear() override;
    bool isEmpty() const override;
    int pop() override;
    void push(int value) override;
    int top()override;

protected:
    // data fields
    Vector data;
};

