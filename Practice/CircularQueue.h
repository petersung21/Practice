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
#include "DoublyLinkedList.h"

class CircularQueue
{
    friend class CircularQueueTest;
public:
    typedef int QueueItem;
    //Empty Queue
    static const QueueItem EMPTY_QUEUE;
    
    CircularQueue();
    ~CircularQueue();
    
    bool enqueue(QueueItem value);
    QueueItem dequeue();
    QueueItem peek() const;
    
    bool empty() const;
    void print() const;
    
private:
    CircularQueue(const CircularQueue& other);
    CircularQueue operator=(const CircularQueue& other);
    
private:
    //Member variables
    DoublyLinkedList* doublyLinkedList;
};

#endif /* defined(__Practice__CircularQueue__) */
