#include<iostream>
#include<vector>
using namespace std;
    int main() {
        vector<string> s={"DOWN","RIGHT","UP"};
        int k=s.size();
        int n=3;
        int r=0;
        int c=0;
        
        for(int i=0;i<k;i++){

            if(s[i]=="UP"){
                r--;
            }
            else if(s[i]=="DOWN"){
                r++;
            }
            else if(s[i]=="RIGHT"){
                c++;
            }
            else{
                c--;
            }

            
        }
         cout<< r*n+c;
    }

