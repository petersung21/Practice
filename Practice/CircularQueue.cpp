//
//  CircularQueue.cpp
//  Practice
//
//  Created by Eric Kyungwoo Sung on 2015-11-12.
//  Copyright (c) 2015 Peter Hyungrok Sung. All rights reserved.
//

#include "CircularQueue.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

CircularQueue::CircularQueue(){
    doublyLinkedList = new DoublyLinkedList();
}


CircularQueue::~CircularQueue(){
    if (doublyLinkedList != NULL)
    {
        delete doublyLinkedList;
    }
}

bool CircularQueue::enqueue(QueueItem value){
    if (doublyLinkedList->size() != 0){
        doublyLinkedList->insert_front(value);
        return true;
    } else {
        return false;
    }
}

CircularQueue::QueueItem CircularQueue::dequeue(){
    int returnInt = doublyLinkedList->select(doublyLinkedList->size()-1);
    doublyLinkedList->remove_back();
    return returnInt;
}

CircularQueue::QueueItem CircularQueue::peek() const{
    int returnInt = doublyLinkedList->select(doublyLinkedList->size()-1);
    doublyLinkedList->remove_back();
    return returnInt;
}

bool CircularQueue::empty() const{
    return doublyLinkedList->size();
}


void CircularQueue::print() const{
    doublyLinkedList->print();
}

CircularQueue::CircularQueue(const CircularQueue& other){
    doublyLinkedList = new DoublyLinkedList(*other.doublyLinkedList);
}

CircularQueue CircularQueue::operator=(const CircularQueue &other){
    CircularQueue* circularQueue = new CircularQueue(other);
    return *circularQueue;
}