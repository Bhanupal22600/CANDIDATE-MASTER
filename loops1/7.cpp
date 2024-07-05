//Display this ap - 100,97,94,91,... upto all terms which are positive 
#include<iostream>
using namespace std;
int main(){
int a=100;
for(int i=1;i<=34;i++){// we r doing this ques with dhaccha method means we are moving loop from  1 to n  
    cout<<a<<endl;// we find n using an>0
    a=a-3;
}
}