#include <bits/stdc++.h>
using namespace std;

class Cricketer{
public:
    string name;
    int runs;
    Cricketer(string name,int runs){
        this->name=name;// this name here means not local runs but class k attributes wala name
        this->runs=runs;
    }
    void print(){
        cout<<name<<" "<<runs<<" "<<endl;
        cout<<this->name<<" "<<this->runs<<" "<<endl;//same as above but we prefer this line as fun k paramarter m name variable bhi ho sakta hai
    }
};


int main() {
    Cricketer c1("virat kohli",25000);
    
    c1.print();// or we can do print(c1); agr hamara fun outside cls hota toh
    

    Cricketer* p1=&c1;// like int* p = a; where a is an int variable
    cout<<(*p1).runs<<endl;
    (*p1).runs=77;// or p1->runs
    cout<<c1.runs<<endl;


}