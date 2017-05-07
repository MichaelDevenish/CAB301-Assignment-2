#ifndef MINDISTANCE_H
#define MINDISTANCE_H

#include <limits>
#include <cmath>
#include <string>
#include <sstream>

class MinDistance
{
    public:
        static int MinDistanceOne(int input[], int inputSize);
        static std::string TestEqual(int expected, int input[], int inputSize);
        static int MinDistanceModified(int input[], int inputSize);
        static std::string RunTests();

    private:
        MinDistance();
        virtual ~MinDistance();
};

#endif // MINDISTANCE_H
