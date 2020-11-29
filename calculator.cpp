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
// int a= *(&arr+1);
// cout << arr +3<<endl<<(&arr + 1)<<endl<<&arr<<endl<<arrSize<<endl;
cout<< arr[0]<<"  start of array"<<endl;
cout<< arr<<"start of array"<<endl;
// int a =arr;
// cout <<"A : "<<a<<endl;
cout << "pointrt : " << *(&arr + 1)<< endl;
cout <<"here: " <<&arr << *&arr<<endl;
cout<< arr[5]<<" end of array"<<endl;
cout <<*&arr[5];

// for (int i = 0; i < 5; i++){
// cout<<arr[i]<<endl;
// }
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