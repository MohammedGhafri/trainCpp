#include <iostream>

using namespace std;

class Book
{
public:
    string name;
    string author;
    int pages;
    Book()
    {
        cout << "this froom class" << endl;
    }
};
int main()
{
    Book book1;
}