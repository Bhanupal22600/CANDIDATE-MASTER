#include<iostream>
using namespace std;
int main(){
    int x=4;
    int* ptr=&x;//"a600"
    cout<<*ptr<<endl;
    ptr=ptr+1;//as now ptr pointer point on adress eg. "a604"
    cout<<*ptr<<endl;//it print anything randomly which is not our x value

}