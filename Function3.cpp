#include <iostream>

using namespace std;

double area(double x)
{
    double xSquare = x *x;
    return xSquare;
}

double cube(double x)
{
    return x*x*x;
}
int main(void)
{
    double answer = area(3.2);
    cout<< answer<<endl;
    answer = cube(3.2);
    cout<< answer;
}