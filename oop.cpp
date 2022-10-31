#include "mento.h"
#include <iostream>

using namespace std;

class Skills
{
public:
    int speed = 10;
    int worth = 200;
    int _X = 5;
    int _Y = -3;

    int increaseWorth(Skills &skills, int times = 1)
    {
        if (times > 1)
        {
            skills.worth += times;
            return skills.worth;
        }
        skills.worth++;
        return skills.worth;
    }

    int decreaseWorth(Skills &skills, int times = 1)
    {
        if (times > 1)
        {
            skills.worth -= times;
            return skills.worth;
        }
        skills.worth--;
        return skills.worth;
    }
};

class Car
{
public:
    string name;
    int year;
    Skills skills;

    void moveTo(Car &car, signed int _X, signed int _Y)
    {
        std::cout << "Car moved from " << car.skills._X << "," << car.skills._Y << " to " << _X << "," << _Y << std::endl;
        car.skills._X = _X;
        car.skills._Y = _Y;
    }

    Skills boostSkills(Car &car)
    {
        car.skills.worth = 5000;

        return car.skills;
    }
};

struct Human
{
    static int age;

    void wake()
    {
        print("wake up maaan");
    }
};

int main()
{

    Car car = Car();
    Human human;

    human.wake();

    car.year = 1969;
    car.name = "Pontiac GTO";

    car.moveTo(car, 5, -1);

    print(to_string(car.skills._Y));

    Skills skills = car.boostSkills(car);

    print(to_string(skills.decreaseWorth(skills, skills.worth / 8)));
}