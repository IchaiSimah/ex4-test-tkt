#ifndef HELPER_FUNCTIONS_H_
#define HELPER_FUNCTIONS_H_
#include <string>
#include <iostream>
#include <queue>
#include <stack>

#include "Players/Player.h"
const int MIN_PLAYERS_SIZE = 2;
const int MAX_PLAYERS_SIZE = 6;
const char WORD_SEPARATOR =' ';
const char LOWER_A ='a';
const char UPPER_A ='A';
const char LOWER_Z ='z';
const char UPPER_Z ='Z';

template <class T>
bool validValueInsertion(T& toSet, bool(*boolFunction)(T&),
                void(*startingMesssage)()= nullptr, void(*errorMessage)() = nullptr){
    startingMesssage()
    if (std::cin >> toSet){
        if(boolFunction(toSet)){
            return true;
        }
    }
    errorMessage();
    return false
}

bool validSize(int& size){
    return((size >= MIN_PLAYERS_SIZE) && (size <= MAX_PLAYERS_SIZE));
}

bool isValidNameAndRole(std::string& nameAndRole){
       int index = 0;
   while (nameAndRole[index]!= WORD_SEPARATOR) {
       if (!isLetter(nameAndRole[index++])) {
           printInvalidName();
           return false;
       }
   }
   size_t pos = nameAndRole.find_first_of(' ');
   std::string role = nameAndRole.substr(pos+1);
    if(role != HEALER && role != NINJA && role != WARRIOR){
        printInvalidClass();
        return false;
    }
    return true;
}

bool isLetter(char toCheck){
    return((toCheck >= UPPER_A && toCheck <= UPPER_Z) || (toCheck >= LOWER_A && toCheck <= LOWER_Z));
}

void printPlayers(std::queue<std::shared_ptr<Player>> queueToPrint, int &startingRank){
    while (!queueToPrint.empty()){
        printPlayerLeaderBoard(startingRank++, *(queueToPrint.front()));
        queueToPrint.pop();
    }
}

void printPlayers(std::stack<std::shared_ptr<Player>> stackToPrint, int &startingRank){
    while (!stackToPrint.empty()){
        printPlayerLeaderBoard(startingRank++, *(stackToPrint.top()));
        stackToPrint.pop();
    }
}
#endif //HELPER_FUNCTIONS_H_