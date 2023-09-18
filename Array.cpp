#include <iostream>

using namespace std;

int main  (void)
{
    int nums [] = {1,2,3,4,5};
    cout << nums[0]<<endl;
    int age = nums[4];
    cout<< age<<endl;
    age = 10;
    cout<< nums[4]<<endl;
    cout<< age<<endl;
}