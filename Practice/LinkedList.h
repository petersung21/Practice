//
//  LinkedList.h
//  Practice
//
//  Created by Eric Kyungwoo Sung on 2015-10-31.
//  Copyright (c) 2015 Peter Hyungrok Sung. All rights reserved.
//

#ifndef __Practice__LinkedList__
#define __Practice__LinkedList__

#include <stdio.h>
#include <iostream>

class LinkedList
{
public:
    struct Node;
    typedef int DataItem;
    Node* ListSearch(DataItem value, Node *head);
    static void InsertNewLast(DataItem value, Node *L);
    static void DeleteLastNode(Node *L);
    static void PrintList(Node *head);
};

#endif /* defined(__Practice__LinkedList__) */
