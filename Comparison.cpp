#include <iostream>

using namespace std;

double Large(double A, double B, double C);

int main(void)
{
    double A,B,C;
    cout<< "Enter Value A: "<<endl;
    cin>> A;
    cout<< "Enter Value A: "<<endl;
    cin>>B;
    cout<< "Enter Value A: "<<endl;
    cin>>C;
    cout<< "Larger Number is "<< Large(A,B,C);
}

double Large(double A, double B, double C)
{
    double result;
    if (A>=B && A>=C)
    {
        result = A;
    }else if (B>=A && B>=C)
    {
        result = B;
    }else
    {
        result = C;
    }
    return result;
}