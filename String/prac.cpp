#include <iostream>
using namespace std;

int cal(int x) {
    if(x == 2 || x == 4) {
        return 0;
    } 

    // Find the largest power of 2 less than or equal to x
    int k=131072;
	   while(k>x){
	   k=k/2;
       }
       int ans=0;
       for(int i=k;i<k*2;i+=2){
        if(i == x) {
            break;
        } else {
            ans += 4;
        }
    }
    
    return ans;
}

int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int x;
        cin >> x;
        cout << cal(x) << endl; // Print the result of cal(x)
    }

    return 0;
}

