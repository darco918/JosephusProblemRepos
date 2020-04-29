#include <iostream>
#include "LinkedList.h"

LinkedList generate_list(int size){
    LinkedList josephusCircle;
    for(int i=2;i<=size;i++){
        josephusCircle.append(i);
    }
    return josephusCircle;
}

int main() {

    LinkedList l;
    int n,m;
    std::cout<<"How many people do you want in the circle? ";
    std::cin>>n;

    std::cout<<"Who starts? ";
    std::cin>>m;

    l= generate_list(n);
    //l.printAll();
    l.startExecution(m);
    std::cout<<"Last man standing is  ";

    l.printAll();

    return 0;
}
