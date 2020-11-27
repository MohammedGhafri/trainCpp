#include <iostream>
using namespace std;
//Three important thing about classes are :
//1- Encapsulation : the properties should  not  be public ( make it private)
// 2- inheritance
// 3- polymophism : Describes the ability of an object to have mutiple forms( many forms)
class Car
{
private:
    string Color;
    double Price;

protected:
    string Name;
    bool isBroken;

public:
    Car(string name, string color, double price)

    {
        Name = name;
        Color = color;
        Price = price;
        isBroken = false;
    }
    void getInfo()

    {
        cout << " Name  :" << Name << endl;
        cout << " Color :" << Color << endl;
        cout << " Price :" << Price << endl;
        cout << "---------------------" << endl;
    }

    void crashcar()
    {
        cout << Name << " crashed" << endl;
        isBroken = true;
    }

    void repairCar()
    {
        cout << Name << " repaired" << endl;
        isBroken = false;
    }

    void move()
    {
        if (isBroken)
            cout << Name << " is broken" << endl;
        else

            cout << Name << " is driving" << endl;
    }
};

class FlyingCar : public Car // Flying Car in derived class and car is Base class. For public, whatever in Car, it will be public in Flying Car
{
public:
    FlyingCar(string name, string color, double price) : Car(name, color, price)
    {
    }
    void move()
    {
        if (isBroken)
            cout << Name << " is broken" << endl;
        else

            cout << Name << " is flying" << endl;
    }
};

class UnderwaterCar : public Car
{
public:
    UnderwaterCar(string name, string color, double price) : Car(name, color, price)
    {
    }
    void move()
    {
        if (isBroken)
            cout << Name << " is broken" << endl;
        else

            cout << Name << " is diving" << endl;
    }
};
int main()
{
    Car ford("Ford", "Red", 50000);
    // myCar.name="Ford";
    // myCar.color="red";
    // myCar.price=5000;
    // cout << " Name  :" << myCar.Name << endl;
    // cout << " Color :" << myCar.Color << endl;
    // cout << " Price :" << myCar.Price << endl;
    // cout << "---------------------" << endl;

    Car volvo("Volvo", "Black", 70000);
    // myCar2.name="Volvo"; //    Declar the object of the class manually
    // myCar2.color="Black";
    // myCar2.price=3000;
    // cout << " Name  :" << myCar2.Name << endl;
    // cout << " Color :" << myCar2.Color << endl;
    // cout << " Price :" << myCar2.Price << endl;
    // cout << "---------------------" << endl;

    // ford.getInfo();
    // volvo.getInfo();
    ford.move();
    ford.crashcar();
    ford.move();
    ford.repairCar();
    ford.move();

    FlyingCar flyingcar("Sky fury", "Black", 50000);
    flyingcar.getInfo();

    UnderwaterCar underwatercar("Sea strom", "Blue", 70000);
    ford.move();
    flyingcar.move();
    underwatercar.move();
    // int variable = 5;
    // int* intPtr=&variable;
    Car*car1=&flyingcar;
    Car*car2=&underwatercar;
    car1->crashcar();
    car2->crashcar();

ford.move();
flyingcar.move();
underwatercar.move();

car1->repairCar();
    car2->repairCar();
    ford.move();
flyingcar.move();
underwatercar.move();

}