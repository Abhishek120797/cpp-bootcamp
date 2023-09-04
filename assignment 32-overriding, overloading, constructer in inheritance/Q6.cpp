#include <iostream>
using namespace std;

class Animal
{
protected:
    string name;

public:
    Animal()
    {
        name = "Unknown";
        cout << "Animal created with default constructor" << endl;
    }
    Animal(const string &animalName)
    {
        name = animalName;
        cout << "Animal created with parameterized constructor" << endl;
    }
};

class Mammal : public Animal
{
protected:
    int numLegs;

public:
    Mammal() : Animal()
    {
        numLegs = 0;
        cout << "Mammal created with default constructor" << endl;
    }
    Mammal(const string &animalName, int legs) : Animal(animalName)
    {
        numLegs = legs;
        cout << "Mammal created with parameterized constructor" << endl;
    }
};

class Dog : public Mammal
{
private:
    string breed;

public:
    Dog() : Mammal()
    {
        breed = "Unknown";
        cout << "Dog created with default constructor" << endl;
    }
    Dog(const string &animalName, int legs, const string &dogBreed) : Mammal(animalName, legs)
    {
        breed = dogBreed;
        cout << "Dog created with parameterized constructor" << endl;
    }
    void displayInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Number of legs: " << numLegs << endl;
        cout << "Breed: " << breed << endl;
    }
};

int main()
{
    // Creating a Dog object using the parameterized constructor
    Dog myDog("Max", 4, "Labrador");

    cout << endl;

    // Creating another Dog object using the default constructor
    Dog defaultDog;

    cout << endl;

    // Displaying information of the first dog
    cout << "Information of myDog:" << endl;
    myDog.displayInfo();

    cout << endl;

    // Displaying information of the second dog
    cout << "Information of defaultDog:" << endl;
    defaultDog.displayInfo();

    return 0;
}
