#include "MinDistance.h"

MinDistance::MinDistance()
{
    //ctor
}

MinDistance::~MinDistance()
{
    //dtor
}

int MinDistance::MinDistanceOne(int input[], int inputSize){
    int dmin = std:numeric_limits<int>::max();
    for (int i = 0; i < inputSize; i++){
        for (int j = 0; j < inputSize; j++){
            if ((i != j) && (input[i] - input[j] < dmin)){
                dmin = [input[i] - input[j];
            }
        }
    }
    return dmin;
}
