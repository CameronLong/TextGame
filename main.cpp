#include <iostream>
#include <string>
#include "linkedList.h"

using namespace std;


int main(){
    Node* temp = new Node("testNode", 23, 1);
    Node* temp1 = new Node();
    temp1->setItemName("Test2");
    cout << "The name of your item is: " << temp1->getItemName() << endl;
    temp->setNext(temp1);

    while(temp != NULL){
        cout << temp->getItemName() << endl;
        temp = temp->getNext();
    }
    return 0;
}
