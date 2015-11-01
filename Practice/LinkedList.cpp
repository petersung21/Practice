//
//  LinkedList.cpp
//  Practice
//
//  Created by Eric Kyungwoo Sung on 2015-10-31.
//  Copyright (c) 2015 Peter Hyungrok Sung. All rights reserved.
//

#include "LinkedList.h"
using namespace std;

struct LinkedList::Node
{
    DataItem data;
    Node *next;
};

LinkedList::Node* LinkedList::ListSearch(LinkedList::DataItem value, LinkedList::Node *head)
{
    Node* node = head;
    
    while (node != NULL)
    {
        if (node->next->data == value)
        {
            return node->next;
        }
        else
        {
            node = node->next;
        }
    }
    
    return NULL;
}
void LinkedList::InsertNewLast(LinkedList::DataItem value, LinkedList::Node *L)
{
    Node* end = L;
    
    if (end == NULL)
    {
        end = new Node;
        end->data = value;
        end->next = NULL;
        return;
    }
    
    while (end -> next != NULL)
    {
        end = end->next;
    }
    end->next = new Node;
    end->next->data = value;
    end->next->next = NULL;
    
}
void LinkedList::DeleteLastNode(LinkedList::Node *L)
{
    Node* end = L;
    if (end == NULL){
        return;
    } else if (end -> next == NULL){
        end = NULL;
    } else
    {
        while (end -> next -> next!= NULL)
        {
            end = end->next;
        }
        end->next = NULL;
    }
    
}
void LinkedList::PrintList(LinkedList::Node *head)
{
    Node* node = head;
    while (node != NULL)
    {
        cout << node->data << endl;
        node = node->next;
    }
}