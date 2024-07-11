#include<iostream>
using namespace std;
int main(){
    //this is like {'a','b','c','d','e','\0'}
    char str[5]={'a','b','c','d','e'};//String are basic character array
    for(int i=0;i<5;i++){
        cout<<str[i]<<" ";

    }
    cout<<endl;

    cout<<"bhanu pal is a candidate master."<<endl;


        //special character backslash 0
        char ch='\0';
        cout<<ch<<endl;// terminal m dekh khali hoga output.
        cout<<(int)ch<<endl;

    cout<<str[5]<<endl;//this means end m element \0 hai str k

    // char str1[5]="abcde" #this gives an error
    char str1[5]="abcd";//dont give"abcde"
    for(int i=0;i<5;i++){
        cout<<str1[i]<<" ";

    }
    cout<<endl;

    cout<<(int)str1[3]<<endl;//thsi is ascii value of d
    cout<<(int)str1[4]<<endl;//it will return 0 which is ascii
    //value of '\0' means in a string we are giving extra space for '\0' 
    //as abcd is of four length indiced 0 to 3 but to store this in a character array we 
    // have to take str[5] not str[4] as '\0' bhi hai jo null hai esliye dikhai nhi deta.

    cout<<(int)str[5]<<endl;

    char str2[10]={'a','b','c','d','e'};//we can give extra size in initilization
    for(int i=0;str[i]!='\0';i++){
        cout<<str[i]<<" ";
    }
    cout<<endl;
    cout<<str2<<endl;

    char str3[]={'a','b','\0','d','e','f'};
    
        cout<<str3<<endl;// jase hi \0 aaya printing chord dega 


}