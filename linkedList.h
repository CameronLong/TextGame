#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <string>
#include <iostream>

using namespace std;

class Node {
    private:
        string itemName;
        int itemValue;
        int count;
        Node* next;
    public:
        // Constructors
        Node(string itemName, int itemValue, int count){
            this->itemName = itemName;
            cout << this->itemName << " has been created." << endl;
            this->itemValue = itemValue;
            this->count = count;
            this->next = NULL;
        }
        Node(){
            this->itemName = "Default";
            this->itemValue = 0;
            this->count = 0;
            this->next = NULL;
        }

        // Getters
        string getItemName(){
            return this->itemName;
        }
        int getItemValue(){
            return this->itemValue;
        }
        int getItemCount(){
            return this->count;
        }
        Node* getNext(){
            return this->next;
        }

        // Setters
        void setItemName(string newItemName){
            this->itemName = newItemName;
        }
        void setItemValue(int newItemValue){
            this->itemValue = newItemValue;
        }
        void setItemCount(int newItemCount){
            this->count = newItemCount;
        }
        void setNext(Node* nextNode){
            this->next = nextNode;
        }
};

#endif
