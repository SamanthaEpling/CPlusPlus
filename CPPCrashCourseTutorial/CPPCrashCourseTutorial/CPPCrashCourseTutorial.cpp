#include <iostream>
using namespace std; //not recommended ideal usage, but for tutorial use only.

//tutorial had removed, keeping for personal notes:
//cout << "Hello World!\n";
//    cout << "Welcome to the C++ Crash Course.\n";
//
//    system("pause>0"); //this will hide the default message provided by visual studio template

//enum EyeColor {Brown, Blue, Green, Gray, Other}; //for switch portion of tutorial

/*float sum(float a, float b); //declaration of function, always listed prior to main fx.
void introduceMe(string name, int age age=0);*/

//void celebrateBirthday(int* age);

class Car {
//public: //access modifier so that the properties are available outside of the class listed here.
private:// to obey rules of encapsulation:  
    string Color;
    double Price; 
protected:
    string Name;    
    bool IsBroken;
public: // to allow users to be able to interact with the data without changing it.
    Car(string name, string color, double price) {
        Name = name;
        Color = color;
        Price = price;
        IsBroken = false;
    }
    // create method to avoid repeating code by listing attributes of class object.
    void getInfo() {
        cout << "Name: " << Name << endl;
        cout << "Color: " << Color << endl;
        cout << "Price: $" << Price << endl;
    }
    void crashCar() {
        cout << Name << " crashed" << endl;
        IsBroken = true;
    }
    void repairCar() {
        cout << Name << " repaired" << endl;
        IsBroken = false;
    }
    void move() {
        if (IsBroken)
            cout << Name << " is broken" << endl;
        else
            cout << Name << " is driving" << endl;
    }
};
 
class FlyingCar:public Car { //FlyingCar class is called the derived class. Car class is the base class.
public:
    FlyingCar(string name, string color, double price):Car(name, color, price) {
    }
    void move() {
        if (IsBroken)
            cout << Name << " is broken" << endl;
        else
            cout << Name << " is flying" << endl;
    }
};

class UnderwaterCar:public Car { 
public:
    UnderwaterCar(string name, string color, double price) :Car(name, color, price) {
    }
    void move() {
        if (IsBroken)
            cout << Name << " is broken" << endl;
        else
            cout << Name << " is diving" << endl;
    }
};

int main()
{
    // basic data types examples in c++:
    //int age = 25;
    //float weight = 65.5;
    //double balance = 12345.67;
    //char gender = 'f';
    //string username = "CodeBeauty";
    //bool isTodaySunny = false;
    //string colors[10] = { "red", "green", "pink", "blue", "black" };
    //cout << colors[0];
    //cin >> colors[0];
    //cout << colors[0];

    //conditional statements discussion:
    //bool isTodaySunny = false;
    //bool isTodayWeekend = true;

    //if (isTodaySunny) {
    //    cout << "Go to the park" << endl;
    //}
    //else {
    //    cout << "Take an umbrella" << endl;
    //};

    //shorthand for conditional statements:
    /*isTodaySunny ? cout << "Go to the park" : cout << "Take an umbrella";*/

    //for more complex conditional statements:
    /*if (isTodayWeekend && isTodaySunny) {
        cout << "Go to the park" << endl;
    }
    else if (isTodayWeekend && !isTodaySunny) {
            cout << "Go to the park, but take an umbrella." << endl;
    }
    else {
        cout << "Got to work." << endl;
    }*/

    //how to nest statements:
    /*if (isTodayWeekend) {
        if(isTodaySunny)
            cout << "Go to the park" << endl;
        else
            cout << "Go to the park, but take an umbrella." << endl;
    }
    else {
        cout << "Got to work." << endl;
    }*/

    //switch cases:
    /*EyeColor eyeColor = Blue;

    switch (eyeColor) {
    case Brown: cout << "80% of people have Brown eyes."; break;
    case Blue: cout << "10% of people have Blue eyes."; break;
    case Green: cout << "2% of people have Green eyes."; break;
    case Gray: cout << "1% of people have Gray eyes."; break;
    case Other: cout << "7% of people have some other eye color."; break;
    default: cout << "Not valid eye color.";
    }*/

    //for loops:
    /*cout << "WHILE:\n";
    int counter = 1;
    while (counter <= 10) {
        cout << counter << endl;
        counter++;
    }

    cout << "DO-WHILE:\n"; //guaranteed to iterate at least once through the loop.
    int DoWhileCounter = 1;
    do {
        cout << DoWhileCounter << endl;
        DoWhileCounter++;
    } while (DoWhileCounter <= 10); */

    //for-loop, often used when you know # of iterations that you will run through ahead of time
    /*string animals[5] = { "cat", "dog", "cow", "goat", "bee" };

    for (int i = 0; i < 5; i++) {
        cout << animals[i] << endl;
    }*/

    //functions portion of tutorial:
    /*cout << sum(2.2, 5) << endl;
    cout << sum(5.2, 3) << endl;
    cout << sum(4, 8) << endl;

    introduceMe("Lionel", 5);
    introduceMe("Fiona", 8);*/

    //pointer stores the address of the location of a variable.
   /* int myAge = 35;
    cout << "Before function age: " << myAge << "." << endl;
    celebrateBirthday(&myAge);
    cout << "After function; age: " << myAge << "." << endl;*/

    /*int luckyNumbers[5] = { 1,3,5,7,9 };
    cout << luckyNumbers << endl; // the variable or name of the array is really just an address/location. (This prints an addy)
    cout << &luckyNumbers[0] << endl; // this means that you want the addy of the first element in the array. (same as above)
    cout << luckyNumbers[0] << endl; // to provide the value at that location within the array.

    int* luckyPointer = luckyNumbers;
    cout << "Pointing to " << luckyPointer << ", value: " << *luckyPointer << endl;
    luckyPointer++; // move to the next address within the array.
    cout << "Pointing to " << luckyPointer << ", value: " << *luckyPointer << endl; // points to index 1*/
    
    // OOP classes/objects class-blueprint; object-example
    // a class is a user-defined data type
    /*Car myCar;
    myCar.Name = "Dodge";
    myCar.Color = "Silver";
    myCar.Price = 50000;
    cout << "Name: " << myCar.Name << endl;
    cout << "Color: " << myCar.Color << endl;
    cout << "Price: $" << myCar.Price << endl;

    Car myCar2;
    myCar2.Name = "Subaru";
    myCar2.Color = "Red";
    myCar2.Price = 25000;
    cout << "Name: " << myCar2.Name << endl;
    cout << "Color: " << myCar2.Color << endl;
    cout << "Price: $" << myCar2.Price << endl;*/

    //constructors: method that is called automatically when you create an instance of that class.
    Car dodge("Dodge", "Silver", 50000);
    Car subaru("Subaru", "Red", 25000);
    /*cout << "Name: " << myCar.Name << endl;
    cout << "Color: " << myCar.Color << endl;
    cout << "Price: $" << myCar.Price << endl;
    cout << "Name: " << myCar2.Name << endl;
    cout << "Color: " << myCar2.Color << endl;
    cout << "Price: $" << myCar2.Price << endl;*/
    //dodge.getInfo();
    //subaru.getInfo();
    dodge.move();

    //3 important aspects of OOP: Encapsulation, Inheritance, Polymorphism
    //Encapsulation demo: properties of your class should not be public.
    /*dodge.move();
    subaru.move();
    subaru.crashCar();
    subaru.move();
    subaru.repairCar();
    subaru.move();*/
    //Inheritence demo:
    FlyingCar flyingCar("Sky Fury", "Sky Blue", 500000);
    flyingCar.move();
    //Polymorphism: ability for an object to have many forms.
    UnderwaterCar underwaterCar("Sea Storm", "Navy Blue", 600000 );
    underwaterCar.move();

    // a trait of polymorphism - you can create a pointer of a base class that points to an object of the derived class.
    Car* car1 = &flyingCar;
    Car* car2 = &underwaterCar;
    car1->crashCar();
    car2->crashCar();
    dodge.move();
    flyingCar.move();
    underwaterCar.move();
    car1->repairCar();
    car2->repairCar();
    dodge.move();
    flyingCar.move();
    underwaterCar.move();

    system("pause>0");
}

/*float sum(float a, float b) { // defines function, always follows main fx
    return a + b;
}

void introduceMe(string name, int age) {
    cout << "My name is " << name <<"." << endl;
    cout << "I am " << age << " years old." << endl;
}*/

/*void celebrateBirthday(int* age) {
    (*age)++;// access the value at that address, de-value the address for this variable.
    cout << "Yeah! Celebrated " << *age << " birthday" << endl;
}*/