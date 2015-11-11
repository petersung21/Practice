//
//  SequentialList.cpp
//  Practice
//
//  Created by Eric Kyungwoo Sung on 2015-11-10.
//  Copyright (c) 2015 Peter Hyungrok Sung. All rights reserved.
//

#include "SequentialList.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

SequentialList::SequentialList(unsigned int cap){
    data_ = (DataType*) malloc(sizeof(int)*cap);
    capacity_ = cap;
    size_ = 0;
}


SequentialList::~SequentialList(){
    if (data_){
        free(data_);
    }
}

unsigned int SequentialList::size() const{
    return size_;
}

unsigned int SequentialList::capacity() const{
    return capacity_;
}

bool SequentialList::empty() const{
    if (size_ == 0){
        return true;
    } else{
        return false;
    }
}

bool SequentialList::full() const{
    if (size_ == capacity_){
        return true;
    } else{
        return false;
    }
}

unsigned int SequentialList::search(DataType val) const{
    for (int i=0; i<size_; i++)
    {
        if(data_[i] == val)
        {
            return i;
        }
    }
    
    return -1;
}

void SequentialList::print() const{
    for (int i=0; i<size_; i++){
        cout << data_[i] << endl;
    }
}

SequentialList::DataType SequentialList::select(unsigned int index) const{
    if (size_ > index){
        return data_[index];
    } else{
        return -1;
    }
}

bool SequentialList::insert(DataType val, unsigned int index){
    if (index<=size_ && index < capacity_)
    {
        for (int i=size_-1;i>=index;i--){
            if (i+1<capacity_){
                data_[i+1] = data_[i];
            }
        }

        data_[index] = val;
        size_++;
        return true;
    }
    else {
        return false;
    }
}

bool SequentialList::insert_front(DataType val){
    insert(val,0);
    return true;
}

bool SequentialList::insert_back(DataType val){
    data_[size_] = val;
    size_++;
    return true;
}

bool SequentialList::remove(unsigned int index){
    if (size_>0 && index<size_)
    {
        for (int i=index;i<size_;i++){
            data_[i] = data_[i+1];
        }
    
        data_[size_-1] = NULL;
        size_--;
        return true;
    }
    else {
        return false;
    }
}

bool SequentialList::remove_front(){
    remove(0);
    return true;
}

bool SequentialList::remove_back(){
    remove(size_-1);
    return true;
}

bool SequentialList::replace(unsigned int index, DataType val){
    if (size_ > index){
        data_[index] = val;
        return true;
    }else {
        return false;
    }
}

SequentialList::SequentialList(const SequentialList& rhs){
    memcpy(data_,rhs.data_, sizeof(int)*rhs.capacity_);
    capacity_ = rhs.capacity_;
    size_ = rhs.size_;
}

SequentialList& SequentialList::operator=(const SequentialList& rhs){
    SequentialList* sequentialList = new SequentialList(rhs);
    return *sequentialList;
}

