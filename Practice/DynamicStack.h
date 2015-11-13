//
//  DynamicStack.h
//  Practice
//
//  Created by Eric Kyungwoo Sung on 2015-11-12.
//  Copyright (c) 2015 Peter Hyungrok Sung. All rights reserved.
//

#ifndef __Practice__DynamicStack__
#define __Practice__DynamicStack__

#include <stdio.h>
#include <iostream>

class DynamicStack
{
    friend class DynamicStackTest;
public:
    typedef int StackItem;
    //Indicator of empty stack
    static const StackItem EMPTY_STACK;
    
    DynamicStack();
    DynamicStack(unsigned int capacity);
    ~DynamicStack();
    
    void push(StackItem value);
    StackItem pop();
    
    bool empty() const;
    int size() const;
    StackItem peek() const;
    void print() const;

private:
    //Copy constructor
    DynamicStack(const DynamicStack& other){}
    DynamicStack operator=(const DynamicStack& other);
    
private:
    StackItem* items_;
    int capacity_;
    int size_;
    int init_capacity_;
    
};

#endif /* defined(__Practice__DynamicStack__) */
