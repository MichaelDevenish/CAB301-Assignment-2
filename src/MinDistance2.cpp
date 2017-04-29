#include "MinDistance2.h"

MinDistance2::MinDistance2()
{
    //ctor
}

MinDistance2::~MinDistance2()
{
    //dtor
}

int MinDistance2::MinDistanceTwo(double input[], int inputSize){
    int dmin = INT_MAX;
    for (int i = 0; i < inputSize-2; i++){
        for (int j = i+1; j < inputSize-1; j++ ){
            int temp = round(input[i]-input[j]); //basic operation
            if(temp < dmin){
                dmin = temp;
            }
        }
    }
    return dmin;
}
