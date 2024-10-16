#include<iostream>
#include<vector>
using namespace std;
int count=0;
int inversion(vector<int> & a, vector<int> & b){
    int count =0;
    int i=0;//a
    int j=0;//b
    while(i<a.size() && j<b.size()){
        if(a[i]>b[j]) {
            count+=(a.size()-i);
            j++;
        }
        else{// a[i]<=b[j]
            i++;
        }
    }
    return count;
}
void merge(vector<int>& a,vector<int>& b,vector<int>& res){
    int i=0;
    int j=0;
    int k=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<=b[j]) res[k++] = a[i++];   
        else res[k++] = b[j++];
    }
    if(i==a.size()){// a is at end
        while(j<b.size()){
            res[k++] = b[j++];
        }

    }
    if(j==b.size()){// b is at end
        while(i<a.size()){
            res[k++] = a[i++];
        }

    }
    
}

void mergeSort(vector<int>& v) {
    int n = v.size();
    if (n <= 1) return;

    int n1 = n / 2;
    int n2 = n - n1;
    
    vector<int> a(n1), b(n2);
    
    // Copy elements into sub-arrays a and b
    for (int i = 0; i < n1; i++) {
        a[i] = v[i];
    }
    for (int i = 0; i < n2; i++) {
        b[i] = v[i + n1];
    }
    
    // Recursively sort the sub-arrays
    mergeSort(a);
    mergeSort(b);
    //count the inversions
    count+=inversion(a,b);
    // Merge the sorted sub-arrays back into the original vector
    merge(a, b, v);
    // now this is modify version of merge here 
    //we are trying to reduce the space complexity from nlogn to n.
    a.clear();
    b.clear();//b vector ko remove kr dega
}

int main() {
    int arr[] = {5,1,3,0,4,2,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    vector<int> v(arr, arr + n);//copy kre hai bas element of arr in v as in vector we have levearage to do v.size()
    
    // Print the original array
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    
    // Sort the array using merge sort
    mergeSort(v);
    
    cout<<count;

    return 0;
}
//method2