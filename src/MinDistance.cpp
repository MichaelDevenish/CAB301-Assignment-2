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
    int dmin = std::numeric_limits<int>::max();
    for (int i = 0; i < inputSize; i++){
        for (int j = 0; j < inputSize; j++){
            if ((i != j) && (input[i] - input[j] < dmin)){
                dmin = std::abs(input[i] - input[j]);
            }
        }
    }
    return dmin;
}
int MinDistance::MinDistanceModified(int input[], int inputSize){
    int operations = 0;
    int dmin = std::numeric_limits<int>::max();
    for (int i = 0; i < inputSize; i++){
        for (int j = 0; j < inputSize; j++){
            if ((i != j) && (input[i] - input[j] < dmin)){
                operations++;
                dmin = std::abs(input[i] - input[j]);
            }
        }
    }
    return operations;
}

std::string MinDistance::TestEqual(int expected, int input[], int inputSize){
    std::stringstream output;
    output << "Input: {";
    for(int i = 0; i < inputSize; i++){
        output << input[i];
        if(i != inputSize-1){
            output << ",";
        }
    }
    int realOutput = MinDistanceOne(input, inputSize);
    output << "} " << std::endl << "Expected Output: " << expected <<
    " Observed Output: " << realOutput;
    if(realOutput == expected){
        output << " (TEST PASSED)\n";
    }else{
        output << " (TEST FAILED)\n";
    }
    return output.str();
}

std::string MinDistance::RunTests(){

}
