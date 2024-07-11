#include <iostream>
using namespace std;

int main() {
	
	    int x;
	    cin>>x;
	    
	   if(x==2 || x==4){
	       return 0;
	   } 
	   
	   //check
	   int k=128000;
	   while(k>x){
	   k=k/2;
       }
       int ans=0;
       for(int i=k;i<k*2;i+=2){
           
           if(i==x){
               cout<< ans;
               break;
           }
            else{
                ans+=4;
            }
       }
       cout<< ans;
    }

