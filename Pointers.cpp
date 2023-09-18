#include <iostream>

using namespace std;

int main()
{
    int A = 1;
    int *pA = &A;
    double B = 2.2;
    double *pB = &B;
    string C = "Hi";
    string *pC = &C;

    // & shows address of memory
    cout<<"Location of A: "<< &A<< endl;
    cout<<"Location of B: "<< pB<< endl;
    cout<<"Location of C: "<< *pC<< endl;

    return 0;
}