#include <iostream>

using namespace std;
int getResult(double a,double b, char op);
int main()
{
    int num1, num2;
    char op;
//     cout <<"Enter first number : "<<endl;
//     cin >>num1;
//     cout <<"Enter second number : "<<endl;
// cin >>num2;
//     cout <<"Select operation "<<endl;
// cin >>op;
// cout <<getResult(num1,num2,op)<<endl;

// int number = 7;
// int guess = 0;
// cout <<number<<guess<< (number == guess)<<endl;
int arr[]={10,2,500,6,8,9};
// int l = arr.length();
// int arrSize = sizeof(arr)/sizeof(arr[0]);
int arrSize = *(&arr + 1) - arr;
cout << *(&arr + 1)-10<<arrSize<<endl;
for (int i = 0; i < arrSize; i++){
cout<<arr[i]<<endl;
}
{
    /* code */
}


}

int getResult(double a,double b,char op)
{

if(op=='+')
return a+b;
else if (op =='-')
return a-b; 
else if (op =='*')
return a*b;
else 
return a/b;


}