#ifndef HELPER_FUNCTIONS_H_
#define HELPER_FUNCTIONS_H_
#include <iostream>
#include <string>
#include <queue>
#include <stack>
#include <memory>
#include "utilities.h"
#include "Players/Player.h"

const char WORD_SEPARATOR =' ';
const char LOWER_A ='a';
const char UPPER_A ='A';
const char LOWER_Z ='z';
const char UPPER_Z ='Z';

template <class T>
bool validValueInsertion(T& toSet, bool(*boolFunction)(T&)){
    if (std::cin >> toSet){
        if(boolFunction(toSet)){
            return true;
        }
    }
    return false;
}



bool isValidNameAndRole(std::string& nameAndRole);

bool isLetter(char toCheck);

void printPlayers(std::queue<std::shared_ptr<Player>> queueToPrint, int &startingRank);

void printPlayers(std::stack<std::shared_ptr<Player>> stackToPrint, int &startingRank);

#endif //HELPER_FUNCTIONS_H_