#include <iostream>
#include <cmath>

using namespace std;

void sayHi(){
    cout << "Hello Ghafri"<<endl;
}
int cube(double num);

int getMax(int num1, int num2){
    int result;
    if (num1>num2)
    return result=num1;
    else
    return result=num2;
    
}
int main()
{
    int luckyNums []= {1,5,1,9,6,3};
    cout <<luckyNums[5]<<endl;
    sayHi();
cout <<cube(5.3)<<endl; 
cout << getMax(5,6.9)<<endl;
return 0;
}



int cube(double num){
    int result = num * num *num;
    return result;
}



// string phrase = "mohammed";
    // cout << phrase.substr(1,3)<<endl;
    // cout << phrase.find("moh");