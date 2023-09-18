#include <iostream>

using namespace std;

int main(void)
{
    string statement = "I love netflix";
    cout << statement[7] << endl;
    cout << statement.length() << endl;
    cout << statement.find("net", 2)<< endl;
    cout << statement.find("I", 0)<< endl;
    cout << statement.substr(7,7) << endl;

    // must use '' and not ""
    statement[0] = 'U';
    cout << statement << endl;
}