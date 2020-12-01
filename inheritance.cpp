#include <iostream>
using namespace std;

class Chef{
    public:
    void makeChicken(){
cout <<"The chef makes chicken"<<endl;

    }
    void makeSalad(){
        cout << "The chef makes Salad"<<endl;
    }
    void makeSpecialDish(){
        cout <<"The chef makes special dish"<<endl;
    }
};

class ItalianChef : public Chef{
    public:
void makePasta(){
    cout << "The chef makes Pasta"<<endl;
}
};
int main(){
Chef chef;
chef.makeChicken();
ItalianChef italianChef;
italianChef.makeChicken();
italianChef.makePasta();

    return 0;
}