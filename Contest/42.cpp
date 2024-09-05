#include<iostream>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int x, y, k;
        cin >> x >> y >> k;
        int count=0;
       if(x<y){
        if(y-x<k){
            count =y/k;
        if(y%k==0){
            cout << (count)*2 << endl;
        }
        else{
            cout<<(count+1)*2<<endl;
        }
        }
        
        else{
               count =y/k;
        if(y%k==0){
            cout << (count)*2 << endl;
        }
        else{
            cout<<(count+1)*2<<endl;
        }
        }
       }
        
        else if (y<x){
            count=(x/k);
            if(x-y<k){
                if(x%k==0) cout << (count)*2  << endl;
                else{
                    cout << (count+1)*2 + << endl;
                }
            }
        
        else{
                if(x%k==0) cout << (count)*2-1<< endl;
                else{
                    cout<<(count)*2 +1<<endl;
                }
                
            }
        }
    
        else{
            count=(x/k);
            if(x%k==0) cout<<(count)*2<<endl;
            else{
                cout<<(count+1)*2<<endl;
            }
            
        }

        
        
    }
    
    return 0;
}
