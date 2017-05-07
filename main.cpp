#include <iostream>
#include <MinDistance.h>
#include <MinDistance2.h>
#include <stdlib.h>
#include <time.h>
#include <fstream>

using namespace std;

void OperationCount(int setSize, int testJump){
    ofstream myfile;
    myfile.open ("outputCount.csv");

	srand(time(NULL));
    for(int i = 0; i <= setSize; i += testJump){
        int testArray[i];
        for(int e = 0; e < i; e++){
            int c = rand() % i;
            testArray[e] = c;
        }
        myfile << i;
        int result1 = MinDistance::MinDistanceModified(testArray,i);
        int result2 = MinDistance2::MinDistanceModified(testArray,i);
        myfile << "," << result1 << "," << result2 << endl;
        cout << i << " of " << setSize <<endl;
    }
    myfile.close();
}

void OperationTime(int setSize, int testJump,int numRepeats){
    ofstream myfile;
    myfile.open ("outputTime.csv");

	srand(time(NULL));
    for(int i = 0; i <= setSize; i += testJump){
        int testArray[numRepeats][i];
        for(int j = 0;  j < numRepeats; j++){
            for(int e = 0; e < i; e++){
                int c = rand() % i;
                testArray[j][e] = c;
            }
        }
        clock_t start1 = clock();
        for(int c = 0; c < numRepeats; c++){
            MinDistance::MinDistanceOne(testArray[c],i);
        }
        clock_t finish1 = clock();
        clock_t start2 = clock();
        for(int c = 0; c < numRepeats; c++){
            MinDistance2::MinDistanceTwo(testArray[c],i);
        }
        clock_t finish2 = clock();
        myfile << i;
        myfile << "," << (float(finish1 - start1)/numRepeats)
            << "," << (float(finish2 - start2)/numRepeats) << endl;
        cout << i << " of " << setSize <<endl;
    }
    myfile.close();
}

int main()
{
    OperationTime(10000,1000,10);
    int arr[] = {1,2,5,7,9};
    string test = MinDistance2::RunTests();

    cout << test << endl;
    return 0;
}

