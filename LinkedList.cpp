//
// Created by murja on 18-Apr-20.
//

#include "LinkedList.h"
#include <iostream>

Node *LinkedList::getHead() const {
    return this->head;
}


LinkedList::LinkedList() {
    this->head = new Node();
    this->head->setNext(nullptr);
    this->head->setVal(1);
    this->size = 1;
}

void LinkedList::append(int mval) {
    Node *head = getHead();

    Node *mNode = new Node();
    mNode->setVal(mval);
    if (head->getNext() == nullptr) {
        head->setNext(mNode);
        mNode->setNext(head);
    } else {
        Node *lNode = getHead();
        for (int i = 1; i < this->size; i++) {
            lNode =lNode->getNext();
        }
        lNode->setNext(mNode);
        mNode->setNext(head);
    }

    this->size += 1;
}

void LinkedList::printAll() const {
    Node *lNode = getHead();
    for (int i = 1; i <= this->size; i++) {
        std::cout << lNode->getVal() << " ";
        lNode = lNode->getNext();
    }
    std::cout << std::endl;

}

int LinkedList::getSize() const {
    return this->size;
}

void LinkedList::setSize(int size) {
    this->size = size;
}

void LinkedList::remove(int val) {
    Node *lNode = getHead();
    Node *auxNode = getHead();
    if (val == lNode->getVal()) {
        for (int i = 1; i < this->size; i++) {
            auxNode =auxNode->getNext();
        }
        // I am at last node
        auxNode->setNext(lNode->getNext()); // this points to 2nd element
        this->head = lNode->getNext();
        delete (lNode);
    } else {
        Node *precedent = getHead();
        auxNode = precedent->getNext();
        for (int i = 2; i < this->size; i++) {
            if( auxNode->getVal() == val) break;
            precedent = precedent->getNext();
            auxNode = auxNode->getNext();
        }
        precedent->setNext(auxNode->getNext());
        delete (auxNode);
    }

    this->size-=1;

}
