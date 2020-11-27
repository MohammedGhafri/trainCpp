#include <iostream>
using namespace std;


float sum(float a,float b); // Function decleration ( it comes before main function)
void introduceMe( string name, int age=0);
int main()
{
cout<<sum(2.2,5)<<endl;
introduceMe("Ghafri", 26);
introduceMe("Anna", 36);

}

float sum(float a,float b)// Function defenetion ( it goes after main function)
{
return a+b;
} // Function defenetion ( it goes after main function)

void introduceMe( string name, int age){
    cout <<" my name is : "<< name<< endl;
    cout <<" I am "<< age << "years old"<<endl;
}