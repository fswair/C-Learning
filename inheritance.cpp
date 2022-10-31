#include <iostream>
#include "mento.h"

class Animal
{
public:
    string name;
    string kind;
    int age;

    Animal()
    {
        print("Animal default constructor inititalized.");
    }
    Animal(string Name, string Kind, int Age)
    {
        name = Name;
        kind = Kind;
        age = Age;
        print("Animal constructor initialized!");
    };

    void run()
    {
        print("Animal is running..");
    }

    void eat()
    {
        print("Animal is eating..");
    }
};

class Cat : public Animal
{
public:
    string catName;
    string catKind;
    int catAge;
    Cat()
    {
        meow();
    };

    void meow()
    {
        print("meoooowwwww.. i'm a coder catttt");
    }
};

int main()
{

    Cat cat = Cat();

    cat.eat();
    cat.run();
    cat.meow();
}