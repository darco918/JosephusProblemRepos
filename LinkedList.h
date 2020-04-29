//
// Created by murja on 18-Apr-20.
//

#ifndef JOSEPHUS_LINKEDLIST_H
#define JOSEPHUS_LINKEDLIST_H


#include "Node.h"

class LinkedList {
private:
    Node * head;
    int size;

public:
    LinkedList();
    void append(int);
    void remove(int);
    //void remove(Node*);
   // Node* listThird(Node*) const;
    void printAll() const;
    int getSize() const ;
    void setSize(int);
    Node* getHead() const ;

    Node *findNode(int val) const;

    void startExecution(int startingPoint);
};

#endif //JOSEPHUS_LINKEDLIST_H
