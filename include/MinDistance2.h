#ifndef MINDISTANCE2_H
#define MINDISTANCE2_H

#include <cmath>
#include <limits>
#include <string>
#include <sstream>

class MinDistance2
{
    public:
        static int MinDistanceTwo(int input[], int inputSize);
        static std::string TestEqual(int expected, int input[], int inputSize); //input: \nexpected output: , observed output:  (TEST PASSED) //throw exception if failed
        static std::string RunTests();
        //TEST CODE MUST BE WRITTEN IN MAIN SINCE THEY MUST RUN ON THE SAME DATA
        //static void BaiscOperations(int setSize, int testSize, int testIncrement);
        //static void RunTime(int setSize, int testSize, int testIncrement);
    private:
        static int MinDistanceModified(int input[], int inputSize);
        MinDistance2();
        virtual ~MinDistance2();

};

#endif // MINDISTANCE2_H
