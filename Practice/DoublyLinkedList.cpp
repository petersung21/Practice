//
//  DoublyLinkedList.cpp
//  Practice
//
//  Created by Eric Kyungwoo Sung on 2015-11-11.
//  Copyright (c) 2015 Peter Hyungrok Sung. All rights reserved.
//

#include "DoublyLinkedList.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;




//DoublyLinkedList::Node::Node(DataType value){
//    value = value;
//}

DoublyLinkedList::DoublyLinkedList(){
    head_ = NULL;
    tail_ = NULL;
    size_ = 0;
}

DoublyLinkedList::~DoublyLinkedList(){
    size_ = 0;
}


DoublyLinkedList::Node* DoublyLinkedList::getNode(unsigned int index) const {
    Node* selectedNode = head_;
    int selectedCount = 0;
    
    if (index == 0 && size_ == 1){
        return selectedNode;
    }
    
    while (selectedNode->next != NULL){
        selectedNode = selectedNode->next;
        selectedCount++;
        if (selectedCount == index){
            return selectedNode;
        }
    }
    return NULL;
}

unsigned int DoublyLinkedList::size() const {
    return size_;
}


bool DoublyLinkedList::empty() const {
    if (size_ == 0){
        return true;
    } else {
        return false;
    }
}


DoublyLinkedList::DataType DoublyLinkedList::select(unsigned int index) const {
    Node* selectedNode = getNode(index);
    return selectedNode->value;
}

unsigned int DoublyLinkedList::search(DataType val) const {
    Node* selectedNode = head_;
    int index = 0;
    
    if (selectedNode->value == val){
        return index;
    }
    
    while (selectedNode->next != NULL){
        selectedNode = selectedNode->next;
        index++;
        if (selectedNode->value == val){
            return index;
        }
    }
    
    return -1;
}

void DoublyLinkedList::print() const {
    Node* selectedNode = head_;
    
    if (size_ == 1) {
        cout << selectedNode->value << endl;
    }
    
    while (selectedNode->next != NULL){
        selectedNode = selectedNode->next;
        cout << selectedNode->value << endl;
    }
}

bool DoublyLinkedList::insert(DataType val, unsigned int index) {
    
}

bool DoublyLinkedList::insert_front(DataType val) {
    
}

bool DoublyLinkedList::insert_back(DataType val) {
    
}

bool DoublyLinkedList::remove(unsigned int index) {
    
}

bool DoublyLinkedList::remove_front() {
    
}

bool DoublyLinkedList::remove_back() {
    
}

bool DoublyLinkedList::replace(unsigned int index, DataType val) {
    
}

/*DoublyLinkedList::DoublyLinkedList(const DoublyLinkedList& rhs){
    size_ = rhs.size_;
}

DoublyLinkedList& DoublyLinkedList::operator=(const DoublyLinkedList &rhs){
    DoublyLinkedList* doubleLinkedList = new DoublyLinkedList(rhs);
    return *doubleLinkedList;
}*/




