#include <iostream>

using namespace std;
int main()
{
    int age = 19;
    int *pAge = &age;
    int gpa = 2.7;
    int *pGpa = &gpa;
    string name = "mohammed ";
    string *pName = &name;
    cout <<age<<endl; // the variable it self.
    cout <<pAge<<endl; // the physical address.
    cout <<&age<<endl; // the physical address also.
    cout <<*pAge<<endl; // Derefrencs the physical address. and it will give you the contents.

    cout << *pName;
}