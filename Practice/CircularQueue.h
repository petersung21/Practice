//
//  CircularQueue.h
//  Practice
//
//  Created by Eric Kyungwoo Sung on 2015-11-12.
//  Copyright (c) 2015 Peter Hyungrok Sung. All rights reserved.
//

#ifndef __Practice__CircularQueue__
#define __Practice__CircularQueue__

#include <stdio.h>
#include <iostream>

class CircularQueue
{
    friend class CircularQueueTest;
public:
    typedef int QueueItem;
    //Empty Queue
    static const QueueItem EMPTY_QUEUE;
    
    CircularQueue();
    CircularQueue(unsigned int capacity);
    ~CircularQueue();
    
    bool enqueue(QueueItem value);
    QueueItem dequeue();
    QueueItem peek() const;
    
    bool empty() const;
    bool full() const;
    int size() const;
    void print() const;
    
private:
    CircularQueue(const CircularQueue& other) {}
    CircularQueue operator=(const CircularQueue& other);
    
private:
    QueueItem *items_;
    int head_, tail_;
    int capacity_;
    int size_;
};

#endif /* defined(__Practice__CircularQueue__) */
