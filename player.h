#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>
#include "linkedList.h"
using namespace std;

class Player{
    private:
        string playerName;
        int playerHealth;
        Node* playerInventory;
    public:
        Player(string playerName, int playerHealth = 100, Node* playerInventory = 0){
            this->playerName = playerName;
        }

        // Getters
        string getPlayerName(){
            return this->playerName;
        }
        int getPlayerHealth(){
            return this->playerHealth;
        }
        Node* getPlayerInventory(){
            
        }
        
};

#endif
