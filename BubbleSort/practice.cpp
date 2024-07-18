//sort a string in decreasing order of values associated after removal of values smaller than X.
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s="AZYZXBDXJK";
    string str = "";
    for(int i=0;i<s.size();i++){
        if(s[i]>='X'){
            str.push_back(s[i]);
        }
    }
    int n=str.length();
     bool flag=true;
    for(int i=0;i<n-1;i++){//n-1 passes
        //traverse
        for(int j=0;j<n-1-i;j++){//after putting -i in this line we get our efficient bubble sort code 
            if(str[j]>str[j+1]){
                //swap
                swap(str[j],str[j+1]);
                flag=false;
            }
        }
        if(flag==true){//swap didn't happen
            break;
        }
    }
    
    cout<<str;
}