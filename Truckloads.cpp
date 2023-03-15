#include "Truckloads.h"

int Truckloads::numTrucks(int numCrates,int loadSize){
    if(numCrates<=loadSize){
        return 1;
    }
    int pile1 = numCrates/2;
    int pile2 = numCrates/2;
    if(numCrates%2!=0){
        pile2+=1;
    }
    return numTrucks(pile1, loadSize) + numTrucks(pile2, loadSize);
}