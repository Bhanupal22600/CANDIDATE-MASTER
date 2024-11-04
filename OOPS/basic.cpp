/*classes enables us to apply oop concepts.
1.Data Abstraction
2.Data Encapsulation
3.Inheritance
4.Polymorphism
*/




/*data abstraction mtlb kuch cheeze hide krna
 like in pubg we see no of ills,alive player etc but we dont know how
  or through what server these player are connected similarly we know car running but how its inside function take place we cant see because its wires etc are hidden inside body
this also helps in data security beacuse if they see open code or other thing which is hidden is pubg display only imp thing to a user is sawn so this is because hacker can steal this data
*/

#include<iostream>
using namespace std;

// class student hai ye jiska mtlb hai mene khud aapna data type banaya hai i.e student and esme  3 int ,2 char arr hai 
//toh ab jab bhi muje student data type ki jarurat pdegi inside int main i can use this as other data type i used like int,string etc now student i create
// this is also callen data encapulation as hmne ek capsule(data type m i.e student) m bhot sari cheez daal di(i.e 3 int , 2 char arr)
class student{

    char name[20];
    int rollNo;
    int age;
    int mobNo;
    char address[50];
};

class player{
    public:// public likhna esliye jaruri hai so that we can use this class outside this class
    // in place of public we can also use private(if we write this in place of public then we cant access this class outside this class),protected
    int score;
    int health;

    void showHealth(){
        cout<<"Health is :"<<health<<endl;
    }
    
    void showScore(){
        cout<<"Score:"<<score;
    }
};

class Calculator{
public:
    int a;//data member
    int b;
public:
//now this func can be used outside
    void add(){//member function
        cout<<a-b;
    }
    
    
};

class  pal{
    private://oops khti hai ki variable 
    int member;
    int salary;

    public:
      //setter: value set krega
    void setMember(int s){
        cout<<endl<<"member change ki ja rhe hai"<<endl;
        member=s;

    }
    void setSalary(int h){
        cout<<"salary change ki ja rhi hai";
        salary=h;
    }
    public:
      //getter:value lakr dega
    int getMember(){
        return member;
    }

    int getSalary(){
        return salary;
    }

};

int main(){
int health[100]={};
int score[100]={};
char name[100][10]={};
student bhanu;// data type is student and variable name is bhanu or esi ko hm object khte hai

// kavya ek object(variable name) hai player class(data type) ka
player kavya;// like in other data type in int data type we only give int ,sim in string so here also if a class(our datatype) is having 2 int , a string so we give all 3 
kavya.score=90;
kavya.health=100;

cout<<kavya.score<<endl;
cout<<kavya.health<<endl;

player tushar;
tushar.score=100;
tushar.health=20;

cout<<tushar.score<<endl;
cout<<tushar.health<<endl;


player suraj;
suraj.score=30;
suraj.health=-4;

suraj.showHealth();
tushar.showHealth();

Calculator calci;
calci.a=10;
calci.b=7;
calci.add();// mtlb calculator class m jao then add function ko kro for a variable (object) calci

Calculator c(4,5);
cout<<c.b<<endl;
}