#include <bits/stdc++.h>
using namespace std;

class Scooty{
public:
    int topSpeed;
    float mileage;
    virtual void sound(){// if we remove this virtual then vroom vroom hi rpint hoga 
        cout<<"Vroom Vroom"<<endl;
    }
private:
    int bootSpace;
};
class Bike : public Scooty{
public:
    int gears;
    virtual void sound(){
        cout<<"Droom Droom"<<endl;
    }
private:
    int bootSpace;
};
int main() {
    Scooty* b = new Bike();//object pointer // bike child class hai usko hmne parent class scooty se banaya
    b->sound();// droom dromm hoga as we use virtual to overridding
    return 0;
}