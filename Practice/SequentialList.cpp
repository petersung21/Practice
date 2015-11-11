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

SequentialList::SequentialList(const SequentialList& rhs){
    memcpy(data_,rhs.data_, sizeof(int)*rhs.capacity_);
    capacity_ = rhs.capacity_;
    size_ = rhs.size_;
}

SequentialList& SequentialList::operator=(const SequentialList& rhs){
    SequentialList* sequentialList = new SequentialList(rhs);
    return *sequentialList;
}

