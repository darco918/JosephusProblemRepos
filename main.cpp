#include <iostream>
#include "LinkedList.h"

int main() {

    LinkedList l;
    l.append(2);
    l.append(3);
    l.append(4);
    l.append(5);

    l.append(6);
    l.remove(6);
    l.remove(5);
    l.remove(1);
    l.append(7);
    l.append(8);
    l.remove(8);
    l.remove(7);
    l.append(9);
    l.remove(9);
    l.printAll();

    return 0;
}
