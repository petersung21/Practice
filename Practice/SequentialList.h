//
//  SequentialList.h
//  Practice
//
//  Created by Eric Kyungwoo Sung on 2015-11-10.
//  Copyright (c) 2015 Peter Hyungrok Sung. All rights reserved.
//

#ifndef __Practice__SequentialList__
#define __Practice__SequentialList__

#include <stdio.h>

class SequentialList
{
    friend class SequentialListTest;

public:
    typedef int DataType;
    
//Constructors/Destructors
public:
    SequentialList(unsigned int cap);
    ~SequentialList();
    
//Accesors
public:
    //Return number of elements
    unsigned int size() const;
    //Returns the maximum number of elements the list can hold
    unsigned int capacity() const;
    //Returns true if the list empty, false otherwise
    bool empty() const;
    //Returns true if the list is at capacity false otherwise
    bool full() const;
    //Returns value at given index. If index invalud returns -1
    DataType select(unsigned int index) const;
    //Returns index of value. Returns -1 if not found
    unsigned int search(DataType val) const;
    //Prins all elements in the list
    void print() const;

//Mutators
public:
    //Inserts a value into the list at a given index
    bool insert(DataType val, unsigned int index);
    //Inserts value at beginning of list
    bool insert_front(DataType val);
    //Inserts value at end of the list
    bool insert_back(DataType val);
    //Deletes value from the list at given index
    bool remove(unsigned int index);
    //Deletes a value from beginning of list
    bool remove_front();
    //Delete value at end of the list
    bool remove_back();
    //Replaces value at the given index with given value
    bool replace(unsigned int index, DataType val);
    
//Member variables
private:
    //Pointer to the blockn of memory allocated to store list
    DataType *data_;
    //Capacity of the list
    unsigned int capacity_;
    //Number of used elments in data_
    unsigned int size_;
    
private:
    //Copy constructor
    SequentialList(const SequentialList& rhs){}
    //Assignment operator
    SequentialList& operator=(const SequentialList& rhs){}
    
};


#endif /* defined(__Practice__SequentialList__) */
