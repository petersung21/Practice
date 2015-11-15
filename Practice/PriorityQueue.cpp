//
//  PriorityQueue.cpp
//  Practice
//
//  Created by Eric Kyungwoo Sung on 2015-11-14.
//  Copyright (c) 2015 Peter Hyungrok Sung. All rights reserved.
//

#include "PriorityQueue.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

PriorityQueue::PriorityQueue(unsigned int capacity){
    heap_ = new DataType[capacity+1];
    size_ = 0;
    capacity_ = capacity;
}

PriorityQueue::~PriorityQueue(){
    size_ = 0;
    delete heap_;
}

//When would this fail?
bool PriorityQueue::enqueue(DataType val){
    if (size_ ==0)
    {
        heap_[1] = val;
        size_++;
    }
    else
    {
        heap_[s]
    }
    
    for (int i=1;i<=size_;i++){
        heap_[i] = val;
        
        //break;
    }
    return true;
}

bool PriorityQueue::dequeue(){
    
}

PriorityQueue::DataType PriorityQueue::max() const {
    
}

bool PriorityQueue::empty() const{
    if(size_ == 0){
        return true;
    }else{
        return false;
    }
}

bool PriorityQueue::full() const{
    if (size_ == capacity_)
    {
        return true;
    }else {
        return false;
    }
}

unsigned int PriorityQueue::size() const{
    return size_;
}

void PriorityQueue::print() const{
    for (int i=0;i<size_;i++){
        cout << heap_[i] << endl;
    }
}

PriorityQueue::PriorityQueue(const PriorityQueue& other){
    
}

PriorityQueue& PriorityQueue::operator=(const PriorityQueue &other){
    
}