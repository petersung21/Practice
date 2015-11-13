//
//  DynamicStack.cpp
//  Practice
//
//  Created by Eric Kyungwoo Sung on 2015-11-12.
//  Copyright (c) 2015 Peter Hyungrok Sung. All rights reserved.
//

#include "DynamicStack.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

DynamicStack::DynamicStack(){
    doublyLinkedList = new DoublyLinkedList();
}


DynamicStack::~DynamicStack(){
    if (doublyLinkedList != NULL)
    {
        delete doublyLinkedList;
    }
}

void DynamicStack::push(StackItem value){
    doublyLinkedList->insert_back(value);
}

DynamicStack::StackItem DynamicStack::pop(){
    int returnInt = doublyLinkedList->select(doublyLinkedList->size()-1);
    doublyLinkedList->remove_back();
    return returnInt;
}

DynamicStack::StackItem DynamicStack::peek() const{
    int returnInt = doublyLinkedList->select(doublyLinkedList->size()-1);
    return returnInt;
}

bool DynamicStack::empty() const{
    if (doublyLinkedList->size() == 0){
        return true;
    } else {
        return false;
    }
}

int DynamicStack::size() const{
    return doublyLinkedList->size();
}

void DynamicStack::print() const{
    doublyLinkedList->print();
}

DynamicStack::DynamicStack(const DynamicStack& other){
    doublyLinkedList = new DoublyLinkedList(*other.doublyLinkedList);
}

DynamicStack DynamicStack::operator=(const DynamicStack &other){
    DynamicStack* dynamicStack = new DynamicStack(other);
    return *dynamicStack;
}