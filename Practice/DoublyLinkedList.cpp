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




DoublyLinkedList::Node::Node(DataType value){
    this->value = value;
}

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
    if (index > size_){
        return false;
    } else if (size_ == 0){
        Node* node = new Node(val);
        tail_ = node;
        head_ = node;
        node->next = NULL;
        size_++;
        return true;
    } else if (size_ == index){
        return insert_back(val);
    }else {
        Node* selectedNode = head_;
        Node* node = new Node(val);
        
        for (int i=0; i<index ;i++){
            selectedNode = selectedNode->next;
        }
        Node* tempNode = selectedNode->next;
        selectedNode->next = node;
        node->prev = selectedNode;
        node->next = tempNode;
        tempNode->prev = node;
        size_++;
        return true;
    }
}

bool DoublyLinkedList::insert_front(DataType val) {
    return insert(val, 0);
}

bool DoublyLinkedList::insert_back(DataType val) {
    if (size_ == 0){
        Node* node = new Node(val);
        tail_ = node;
        head_ = node;
        node->next = NULL;
        size_++;
        return true;
    } else{
        Node* node = new Node(val);
        tail_->next = node;
        node->prev = tail_;
        tail_ = node;
        size_++;
        return true;
    }
}

bool DoublyLinkedList::remove(unsigned int index) {
    if (size_ < index || size_ == 0){
        return false;
    } else if (index  == 0){
        head_ = head_->next;
        head_->prev = NULL;
        size_--;
        return true;
    }else if (size_-1 == index){
        return remove_back();
    } else {
        Node* selectedNode = head_;
        Node* previousNode = head_;
        Node* nextNode = head_;
        
        for (int i=0; i<index; i++){
            selectedNode = selectedNode->next;
        }
        
        previousNode = selectedNode->prev;
        nextNode = selectedNode->next;
        
        previousNode->next = nextNode;
        nextNode->prev = previousNode;
        size_--;
        return true;
    }
}

bool DoublyLinkedList::remove_front() {
    return remove(0);
}

bool DoublyLinkedList::remove_back() {
    if (size_==0){
        return false;
    } else {
        Node* lastNode = tail_;
        Node* prev = lastNode->prev;
        
        prev->next = NULL;
        tail_ = prev;
        size_--;
        return true;
    }
}

bool DoublyLinkedList::replace(unsigned int index, DataType val) {
    if (index > size_){
        return false;
    } else {
        Node* selectedNode = head_;
        for (int i =0; i<index ;i++){
            selectedNode = selectedNode->next;
        }
        
        selectedNode->value = val;
        
        return true;
    }
}


DoublyLinkedList::DoublyLinkedList(const DoublyLinkedList& rhs){
    for (int i=0; i<rhs.size_ ;i++){
        insert_back(rhs.getNode(i)->value);
    }
    size_ = rhs.size_;
}

DoublyLinkedList& DoublyLinkedList::operator=(const DoublyLinkedList &rhs){
    DoublyLinkedList* doubleLinkedList = new DoublyLinkedList(rhs);
    return *doubleLinkedList;
}




