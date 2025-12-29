#include <bits/stdc++.h>
using namespace std;


class Student{
public:
    int rno;
    string name;

    Student(int r,string n,float m){// yaha pr marks accessible h
        rno=r;
        name=n;
        marks=m;
    }


    float getMarks(){// getter
        return marks;
    }
    void setMarks(float m){// setter
        marks=m;
    }
private:// eske aandar jo bhi hai vo inaccessable hai in main but accessable within class
    float marks;
    void display(){
        cout<<name<<" "<<marks<<" "<<rno<<endl;
    }
};
int main() {
    Student s1(76,"Raghav",92.2);
    s1.rno=101;// esko khte hai set krna 
    //get krna mtl like print fun in class to get the things
    
    cout<<s1.getMarks()<<endl;
    s1.setMarks(98.5);


    return 0;
}
