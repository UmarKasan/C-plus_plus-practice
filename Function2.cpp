#include <iostream>

using namespace std;
void welcome(string name, int age);
// main is a function
int main(void)
{
    welcome("idiot", 13);
}
// This is a function
void welcome(string name, int age)
{
    cout<< "Welcome "<<name<<"!"<<endl;
    cout<< "You are "<<age<<" years old"<<endl;
}