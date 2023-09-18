#include <iostream>

using namespace std;

class Book
{
    public:
    string title;
    string author;
    int pages;
    // Constructor
    Book(string aTitle, string aAuthor, int aPages)
    {
        title = aTitle;
        author = aAuthor;
        pages = aPages;
        cout<< title<< endl;
        cout<< author<< endl;
        cout<< pages<< endl;
    }
};

int main(void)
{
    Book UmarTales("Chronicles of Umar","Umar",25);
    // UmarTales.title = "Chronicles of Umar";
    // UmarTales.author = "Umar";
    // UmarTales.pages = 25;

    cout<< UmarTales.pages;
}