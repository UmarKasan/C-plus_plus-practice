#include<iostream>
#include <cmath>

using namespace std;

int main(void)
{
    // % divides the nummber and displays the remainder
    cout << 10 %3<< endl;
    int A = 5;
    double B = 5.5;

    // ++ adds 1 +x adds the x value, this is just short hand you can use *, /, -
    A ++;
    B += 5;

    cout<< A <<endl;
    cout << B << endl;

    // Start of math operations with cmath

    cout << pow(2,5)<< endl;
    // round up
    cout << round(4.6)<<endl;
    // round down
    cout << floor(4.4)<< endl;
}