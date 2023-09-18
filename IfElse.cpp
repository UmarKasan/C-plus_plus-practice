#include <iostream>

using namespace std;

int main(void)
{
    bool isMale;
    bool likeGirls;
    cout<<"Are you Male?"<<endl;
    cin>> isMale;
    cout<<"You like girls?"<<endl;
    cin>> likeGirls;

    if(isMale && !likeGirls )
    {
        cout<<"you Gay bitch";
    } else if(!isMale && !likeGirls)
    {
        cout<<"Dammnnn";
    }else if(isMale && likeGirls)
    {
        cout<< "Slay bro";
    }else if(isMale || likeGirls)
    {
        cout<<" we can be friends";
    }else
    {
        cout<< "Disappointment";
    }
} 

