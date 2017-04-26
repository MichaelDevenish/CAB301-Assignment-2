#include <iostream>
#include <MinDistance.h>
#include <MinDistance2.h>
#include <FileOutput.h>

using namespace std;

int main()
{
    int setSize = 50;
    int testSize = 10;
    double outputArray[setSize][testSize];
    for (int i = 0; i < setSize; i++){
        for(int e = 0; e < testSize; e++){
            outputArray[i][e] = i+e;
        }
    }

    FileOutput::writeCSV(setSize,testSize,outputArray);

    MinDistance dist = MinDistance();

    cout << "Hello world!" << endl;
    return 0;
}
