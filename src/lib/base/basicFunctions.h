#include <iostream>
using namespace std;

class BasicFunctions {
 public:
    static void calcInverseMatrix_3x3(double (&inv_a)[3][3],const double (&a)[3][3]);
    static double calcDeterminant_3x3(const double (&a)[3][3]);
};