#include <iostream>

using namespace std;
// This is a function
void welcome(string name, int age)
{
    cout<< "Welcome "<<name<<"!"<<endl;
    cout<< "You are "<<age<<" years old"<<endl;
}
// main is a function
int main(void)
{
    welcome("idiot", 13);
}