#include <iostream>

using namespace std;

void celebrateBirthday(int *age); // * indicate to pointer

int main()
{
    int myAge = 25;
    cout << "Before function, age : " << myAge << endl;
    celebrateBirthday(&myAge); // to pass a pointer
    cout << "After function, age : " << myAge << endl;
    int luckyNumbers[5] = {1, 2, 5, 4, 6};
    cout << luckyNumbers << endl;
    cout << luckyNumbers[0] << endl;
    cout << &luckyNumbers[0] << endl; //& is used to indicate to the address

    int *luckPointers = luckyNumbers;
    cout << "Pointing to " << luckPointers << "With a value of " << *luckPointers << endl;
    luckPointers++;

    cout << "Pointing to " << luckPointers << "With a value of " << *luckPointers << endl;
}

void celebrateBirthday(int *age)
{
    (*age)++; // To access the value that the pointer indicates to
    cout << "yeey, celebrated " << *age << ". birthday" << endl;
}
