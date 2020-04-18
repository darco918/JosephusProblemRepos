//
// Created by murja on 18-Apr-20.
//

#include "Node.h"

int Node::getVal() const {
    return this->val;
}

void Node::setVal(int n) {
    this->val= n;
}

void Node::setNext(Node * node) {
    this->next = node;
}

Node *Node::getNext() const {
    return this->next;
}