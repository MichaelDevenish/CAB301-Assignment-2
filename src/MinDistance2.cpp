#include "MinDistance2.h"

MinDistance2::MinDistance2()
{
    //ctor
}

MinDistance2::~MinDistance2()
{
    //dtor
}

int MinDistance2::MinDistanceTwo(int input[], int inputSize){
    int dmin = std::numeric_limits<int>::max();
    for (int i = 0; i < inputSize-1; i++){
        for (int j = i+1; j < inputSize; j++ ){
            int temp = std::abs(input[i]-input[j]); //basic operation
            if(temp < dmin){
                dmin = temp;
            }
        }
    }
    return dmin;
}

int MinDistance2::MinDistanceModified(int input[], int inputSize){
    int operations = 0;
    int dmin = std::numeric_limits<int>::max();
    for (int i = 0; i < inputSize-1; i++){
        for (int j = i+1; j < inputSize; j++ ){
            int temp = std::abs(input[i]-input[j]); //basic operation
            operations++; //(n-1)^2
            if(temp < dmin){
                dmin = temp;
            }
        }
    }
    return operations;
}

std::string MinDistance2::TestEqual(int expected, int input[], int inputSize){
    std::stringstream output;
    output << "Input: {";
    for(int i = 0; i < inputSize; i++){
        output << input[i];
        if(i != inputSize-1){
            output << ",";
        }
    }
    int realOutput = MinDistanceTwo(input, inputSize);
    output << "} " << std::endl << "Expected Output: " << expected <<
    " Observed Output: " << realOutput;
    if(realOutput == expected){
        output << " (TEST PASSED)\n";
    }else{
        output << " (TEST FAILED)\n";
    }
    return output.str();
}

std::string MinDistance2::RunTests(){
    std::string output = "";
    int arr1[] = {1,2,3,4,5};
    output += "TEST ONE: "+ TestEqual(1,arr1,5);
    return output;
}


