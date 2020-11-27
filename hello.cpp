#include <iostream>
#include <cstdlib>
using namespace std;


enum EyeColor {Brown  , Blue , Green , Gery, Other};
int main()
{
    cout<<"Heelo World by Ghafri ♥ "<<endl;
    int age = 25;
    age = 26;
    float weight= 65.5;
    double weight2= 12345.7;
    char gender = 'm';
    string username= "MGhafri";
    string color[5]={"red","blue","brown","black","white"};
    cout <<color[0]<<endl;
    bool isTodaySuuny=false;
    bool isTodayWeekend=true;
    


    if(isTodaySuuny && isTodayWeekend){
        cout<<"Sunny"<<endl;
    }
    else if(isTodayWeekend && !isTodaySuuny)
    {
        cout<<"Gp to the park, but take an ambrella"<<endl;
    }
    else
    {
        cout<< "Go to the work"<<endl;
    }
    if(1)
    cout<<"1111111"<<endl;
    // isTodaySuuny? cout<<"Got to the park":cout<<"Take an umbrella"<<"mohammed"<<endl;
    
    // cin >>color[0];
    // cout <<color[0];
EyeColor eyeColor = Blue;
switch (eyeColor)
{
case Brown:cout<< "80% of people have  Brwon eyes.";break;
case Blue:cout<< "10% of people have  Blue eyes.";break;
case Green:cout<< "2% of people have  Green eyes.";break;
case Gery:cout<< "1% of people have  Grey eyes.";break;
case Other:cout<< "7% of people have  some Other eye color.";break;
default:cout<<"Not valid eye color"<<endl;
}
    return 0;
    // system("pause>0");
}
