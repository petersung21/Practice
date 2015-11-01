//
//  main.cpp
//  Practice
//
//  Created by Eric Kyungwoo Sung on 2015-10-28.
//  Copyright (c) 2015 Peter Hyungrok Sung. All rights reserved.
//

#include <iostream>
#include "LinkedList.h"
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    //LinkedList linkedList = new LinkedList();
    
    LinkedList::Node *head;
    LinkedList::Node *nodePtr;
    LinkedList::DataItem searchValue;
    
    head = NULL;
    
    LinkedList::PrintList(head);
    LinkedList::InsertNewLast(10, head);
    LinkedList::PrintList(head);
    
    
    return 0;
}

