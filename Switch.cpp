#include <iostream>

using namespace std;

string getDayofWeek(int day)
{
    string dayName;

    switch(day){
        case 0:
        dayName = "Sunday";
        break;
        case 1:
        dayName = "Monday";
        break;
        case 2:
        dayName = "Tuesday";
        break;
        case 3:
        dayName = "Wednesday";
        break;
        case 4:
        dayName = "Thursday";
        break;
        case 5:
        dayName = "Friday";
        break;
        case 6:
        dayName = "Saturday";
        break;
        default:
        dayName = "Invalid day";
    }
    return dayName;
}

int main(void)
{
    int x;
    cout<< "Enter a number"<<endl;
    cin>> x;
    cout<< getDayofWeek(x);
}