//
//  PriorityQueue.h
//  Practice
//
//  Created by Eric Kyungwoo Sung on 2015-11-14.
//  Copyright (c) 2015 Peter Hyungrok Sung. All rights reserved.
//

#ifndef __Practice__PriorityQueue__
#define __Practice__PriorityQueue__

#include <stdio.h>
#include <iostream>
#include <stdio.h>

class PriorityQueue
{
    friend class PreiorityQueueTest;
    
public:
    typedef int DataType;
    
public:
    PriorityQueue(unsigned int capacity);
    ~PriorityQueue();
    
    bool enqueue(DataType val);
    bool dequeue();
    
    DataType max() const;
    bool empty() const;
    bool full() const;
    unsigned int size() const;
    void print() const;
    
private:
    DataType* heap_;
    unsigned int capacity_;
    unsigned int size_;
    
private:
    PriorityQueue(const PriorityQueue& other);
    PriorityQueue& operator=(const PriorityQueue& other);
    
};

#endif /* defined(__Practice__PriorityQueue__) */
