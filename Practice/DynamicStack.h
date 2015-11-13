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
#include "DoublyLinkedList.h"

class DynamicStack
{
    friend class DynamicStackTest;
public:
    
    typedef int StackItem;
    //Indicator of empty stack
    static const StackItem EMPTY_STACK;
    
    DynamicStack();
    ~DynamicStack();
    
    void push(StackItem value);
    StackItem pop();
    
    bool empty() const;
    int size() const;
    StackItem peek() const;
    void print() const;

private:
    //Copy constructor
    DynamicStack(const DynamicStack& other);
    DynamicStack operator=(const DynamicStack& other);
    
private:
    //Member variables
    DoublyLinkedList* doublyLinkedList;
    
};

#endif /* defined(__Practice__DynamicStack__) */
