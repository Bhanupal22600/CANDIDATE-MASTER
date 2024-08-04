#include <iostream>
#include <vector>
using namespace std;

void calc() {
    int n;
    cin >> n;
    vector<int> a(n);
    int count =0;
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
     for (int i = 0; i < n-1; ++i) {
        for(int j=i+1;j<n;j++){
            if((a[i]%2==0 && a[j]%2!=0) || (a[j]%2==0 && a[i]%2!=0 ) ){
                    if(a[i]>a[j]){
                        a[j]+=a[i];
                    }
                    else{
                        a[i]+=a[j];
                    }
                    count ++;
            }
        }
     
    }
    cout<<count++;

    
    
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        calc();
    }
    return 0;
}
