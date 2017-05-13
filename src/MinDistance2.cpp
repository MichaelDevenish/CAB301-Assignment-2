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
    output << "} " << std::endl << "\tExpected Output: " << expected <<
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
    int arr2[] = {-1,-5,-7,-10,-15};
    output += "TEST TWO: "+ TestEqual(2,arr2,5);
    int arr3[] = {5,-5,0,-2,10,15};
    output += "TEST THREE: "+ TestEqual(2,arr3,6);
    int arr4[] = {0,0,1,2};
    output += "TEST FOUR: "+ TestEqual(0,arr4,4);
    int arr5[] = {5,10,15,20};
    output += "TEST FIVE: "+ TestEqual(5,arr5,4);
    int arr6[] = {7,2,16,30};
    output += "TEST SIX: "+ TestEqual(5,arr6,4);
     int arr7[] = {2,7,16,30};
    output += "TEST SEVEN: "+ TestEqual(5,arr7,4);
    int arr8[] = {30,7,2,16};
    output += "TEST EIGHT: "+ TestEqual(5,arr8,4);
    int arr9[] = {30,16,2,7};
    output += "TEST NINE: "+ TestEqual(5,arr9,4);
    int arr10[] = {30,16,7,2};
    output += "TEST TEN: "+ TestEqual(5,arr10,4);
    int arr11[] = {1};
    output += "TEST ELEVEN: "+ TestEqual(std::numeric_limits<int>::max(),arr11,1);
    int arr12[] = {1,1,1};
    output += "TEST TWELVE: "+ TestEqual(0,arr12,3);
    return output;
}
