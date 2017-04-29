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
    protected:
        MinDistance2();
        virtual ~MinDistance2();

    private:
};

#endif // MINDISTANCE2_H
