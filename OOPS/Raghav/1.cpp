#include <bits/stdc++.h>
using namespace std;

/*why we need class for e.g we have to store a particualr studen in a class 6th -> name,rollno,percentage etc then 
int that case we can make 3 arrays of differcent data type or 1 2d matrix with 3 columns but cant do this as data type in roll no,name is different
but yes through 3 one D array we can achieve this but so that in future we can add new character sticks of a student 
we can make a different class with differnt data type of a single stuent in it */

// always by convention we use caps of a class name as here studnt ka S capital hai see below
class Student{// student is a new data type
public:
    string name;
    int rno;
    float gpa;

    //cpnstructor ek fun hai jiska name class jasa hota hai and usme ko return type nhi hota
    //cpnstructor hmse class k aandar banta h
    Student(string s,int r,float g){//default constructor
        name =s;
        rno=r;
        gpa=g;
    }
    Student(int r,string s,float g){//default constructor
        name =s;
        rno=r;
        gpa=g;
    }
    //agr koi bhi constructor nhi hai to default ye hota hai
    // aur esko create krna jaruri nhi hota invisible hota hai
    //but when we create any other const then ye ht jata hai and hmko firse ese create krna hota hai
    // student(){

    // }

    // as above we have a const already
    // default const
    Student() {// for handle such case where you jsut initilize a varibale like Student s5 only not give its three attribute  
       
    }
    Student(string s,int r){//paramaterized constructor
        name =s;
        rno=r;
        
    }
};

//student ek aasa bada box hai jisme 3 chote chote box hai

/*class- ek blue print hota hai like a class name "car" so in car we have which car like e,g honda ,maruti etc so they all belong to car and there 
corresponding speed more e.g like bhanu belong to class human 
object us cllas ka ek instance hota ha like bhanu a obj of human class thhere are multiple thing inside a class liek name ,age,gender etc they are attributes */
void print(Student s){// as a variable hm fak sakte hai any obj of a class ko 
    cout<<s.name<<" "<<s.rno<<" "<<s.gpa<<endl;
}
void change(Student &s){// as a variable hm fak sakte hai any obj of a class ko 
    s.name="papabhanu";
}
int main() {
    Student s1;// s1 ek variable hai datatype student ka
    s1.name ="bhanu";
    // s1.rno=76;
    s1.gpa=9.02;
    cin>>s1.rno;

    Student s2;
    s2.name ="ashish";
    s2.rno=73;
    s2.gpa=5.02;


    cout<<s1.name<<endl;
    cout<<s1.rno<<endl;
    cout<<s1.gpa<<endl;


    cout<<s2.name<<s2.rno<<s2.gpa<<endl;// for every obj to print its attribute we do this again and agin
    // so we make a fun to reduce ut 

    print(s1);
    print(s2);

    print(s1);
    change(s1);//pass by value ho rha hai means change fun m change krne se s1 real m main koi change nhi ho rha
    // we have to use & in fun change variable then we change actual s1
    print(s1);

    //ab agr hme asse obj banane honge toh kafi time lgega, 
    //so we use constructor

    Student s3("shanshank",45,8.1);//jase hm array m arr={2,3,4} 3three diff int k obj ek bar m krte hai store 
    
    // hm do cheez bhi de sakte hai as constr m do hi hai and 1 attirbute noramlly de saktehai
    Student s4("mintu",45);
    s4.gpa=7.02;
    // jab hmne do value di na s4 m toh esne try kra match krne ka kya koi para const hai aasa 
    // so we can make diffenet para const also

    Student s5(45,"suraj",7.2);

    //copy const
    Student s6(s3);//constr hi call ho rha ye default hota hia copy krne k liye
    print(s6);

    change(s3);// also change s6 as deep copy hai
    print(s6);

    Student s7=s3;//deep copy same as above
}