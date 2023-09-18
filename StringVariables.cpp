#include <iostream>
#include <string>

using namespace std;

string main()
{
    string A, B, Ans;
    A ="Joe";
    B = "Lee";
    Ans = A + B;
    cout <<"Value A = "<< A << endl;
    cout << "Value B = "<< B << endl;
    cout << A << " + "<< B <<" = "<< Ans <<endl;

    return Ans;
}

// string to be returned requires special methods probably pointers