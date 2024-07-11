//given a string consisting of lowercase English alphabets.print the character that
//is occuring most no of times.
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){

  

    string s="leetcode";//you ca take s as input also.
    vector<int> arr(26,0);
    for(int i=0;i<s.length();i++){
       char ch=s[i];
       int ascii=(int)ch;
       arr[ascii-97]++;// means arr k is index pr jakr 0 se 1 krdo

    }
    int max=0;
    for(int i=0;i<26;i++){
        if(arr[i]>max) max=arr[i] ; 
    }

    for(int i=0;i<26;i++){
        if(arr[i]==max){
            int ascii =i+97;
            char ch =(char) ascii;
            cout<<ch<<" "<<max<<endl;
        }
    }

//very inficient code below wala dont use this
 /*   
    string s=" leetcode";
    //2
    int max=0;
    for(int i=0;i<s.length();i++){
       char ch=s[i];
       int count =1;
       for(int j=i+1;j<s.length();j++){
        if(s[j]==s[i]) count++;
     }
      if(max<count) max=count;
    }

     for(int i=0;i<s.length();i++){
        char ch=s[i];
        int count =1;
        for(int j=i+1;j<s.length();j++){
           if(s[j]==s[i]) count++;
    
        }
        if(count==max){
        cout<<ch<<" "<<max<<endl;
        }

}
*/
    
}