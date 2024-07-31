#include<iostream>
#include<string>
using namespace std;
// void removeChar(string ans, string original){
//     if(original.length()==0){
//         cout<<ans;
//         return;
//     }
//     char ch=original[0];
//     if(ch=='a') removeChar(ans,original.substr(1));
//     else removeChar(ans+ch,original.substr(1));//substr is built in function use to remove that particular index and give only us index k aage ki string
// }
//more optimised
void removeChar(string ans, string original,int idx){
    if(original.length()==idx){
        cout<<ans;
        return;
    }
    char ch=original[idx];
    if(ch=='a') removeChar(ans,original,idx+1);
    else removeChar(ans+ch,original,idx+1);//substr is built in function use to remove that particular index and give only us index k aage ki string
}

int main(){
    string str="bhanu pal";
    removeChar("",str,0);
    
    
}