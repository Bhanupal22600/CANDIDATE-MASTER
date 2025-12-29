#include <bits/stdc++.h>
using namespace std;

class Scooty{//parent class
public:
    int topSpeed;
    float mileage;
private:
    int bootSpace;
};
class Bike {
public:
    int topSpeed;// likhna pd rha hai jo already scooty m bhi thi
    float mileage;// same
    int gears;
};

//Inheritance class single
class car : public Scooty{//derived class / child class - parent class
public:
    int gears;
};
// car class khud topspeed and mileage attribute honge
int main() {
    Bike b1;
    b1.topSpeed = 180;
    b1.mileage=12.5;
    b1.gears=6;
}