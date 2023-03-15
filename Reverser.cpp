#include "Reverser.h"

int Reverser::reverseDigit(int value){
    if(value<0){
        return -1;
    }
    if(value<10){
        return value;
    }
    int newVal = value%10;
    int multiplier=1;
    int x=value;
    while(x>=10){
        multiplier=multiplier*10;
        x=x/10;
    }
    
    return (newVal*multiplier) + reverseDigit((value-newVal)/10);
}
std::string Reverser::reverseString(std::string characters){
    if(characters.length()<1){
        return "ERROR";
    }
    if(characters.length()==1){
        return characters;
    }
    if(characters.length()==2){
        char letter = characters.at(0);
        characters.at(0) = characters.at(1);
        characters.at(1)= letter;
        return characters;
    }
    char last = characters.at(characters.length()-1);
    char first = characters.at(0);
    
    std::string newWord = characters.substr(1,characters.length()-2);

   return last + reverseString(newWord) + first;
   //return reverseString(characters);
}