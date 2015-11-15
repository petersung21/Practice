//
//  BinarySearchTree.h
//  Practice
//
//  Created by Eric Kyungwoo Sung on 2015-11-14.
//  Copyright (c) 2015 Peter Hyungrok Sung. All rights reserved.
//

#ifndef __Practice__BinarySearchTree__
#define __Practice__BinarySearchTree__

#include <stdio.h>

class BinarySearchTree{
    friend class BinarySearchTreeTest;

public:
    typedef int DataType;
    
public:
    struct Node{
        Node(DataType newVal);
        DataType val;
        Node* left;
        Node* right;
    };

public:
    BinarySearchTree();
    ~BinarySearchTree();
    
    bool insert(DataType val);
    bool remove(DataType val);
    
    bool exists(DataType val) const;
    DataType min() const;
    DataType max() const;
    unsigned int size() const;
    unsigned int depth() const;
    void print() const;
    
private:
    //Recursively get maximum depth from a given node
    int getNodeDepth(Node* n) const;
    
private:
    Node* root_;
    unsigned int size_;
    
private:
    BinarySearchTree(const BinarySearchTree& other);
    BinarySearchTree& operator=(const BinarySearchTree& other);
    
};

#endif /* defined(__Practice__BinarySearchTree__) */
