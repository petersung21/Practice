//
//  DoublyLinkedList.h
//  Practice
//
//  Created by Eric Kyungwoo Sung on 2015-11-11.
//  Copyright (c) 2015 Peter Hyungrok Sung. All rights reserved.
//

#ifndef __Practice__DoublyLinkedList__
#define __Practice__DoublyLinkedList__

#include <stdio.h>
#include <iostream>

class DoublyLinkedList
{
    friend class DoublyLinkedListTest;
    
public:
    typedef int DataType;
    //Arbitrary large number because it can be any size
    static const unsigned int CAPACITY = 65536;
    
private:
    //Node structure
    struct Node {
        Node(DataType value);
        DataType value;
        Node* next;
        Node* prev;
    };
    
    //Get Node at index
    Node* getNode(unsigned int index) const;
    
public:
    //Constructor/destructor
    DoublyLinkedList();
    ~DoublyLinkedList();
    
    //Accessors
    unsigned int size() const;
    bool empty() const;
    DataType select(unsigned int index) const;
    unsigned int search(DataType val) const;
    void print() const;
    
    //Mutators
    bool insert(DataType val, unsigned int index);
    bool insert_front(DataType val);
    bool insert_back(DataType val);
    bool remove(unsigned int index);
    bool remove_front();
    bool remove_back();
    bool replace(unsigned int index, DataType val);
    
private:
    //Member variables
    Node* head_;
    Node* tail_;
    unsigned int size_;
    
private:
    //Copy linked list
    DoublyLinkedList(const DoublyLinkedList& rhs){}
    DoublyLinkedList& operator=(const DoublyLinkedList& rhs);
    
};

#endif /* defined(__Practice__DoublyLinkedList__) */
