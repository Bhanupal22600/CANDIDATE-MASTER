#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& a,vector<int>& b,vector<int>& res){
    int i=0;
    int j=0;
    int k=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]) res[k++] = a[i++];   
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
    
    // Merge the sorted sub-arrays back into the original vector
    merge(a, b, v);
}

int main() {
    int arr[] = {4,1,5,2,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    vector<int> v(arr, arr + n);
    
    // Print the original array
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    
    // Sort the array using merge sort
    mergeSort(v);
    
    // Print the sorted array
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
}
/*             v=4,1,5,2,3


//first mergeSort call in v
     4,1                     5,2,3




// mergesort call in this 
4          1            5       2,3





// merge call in 4 and 1           //mergeSort call in 2,3




     1,4                5      2     3


                                // merge in 2,3



                        5        2,3
     1,4                         2,3,5


// after merge call in these two sorted vec

               1,2,3,4,5
*/
// time complexity O(n)=O(nlogn) here-log is with base 2
// space complexity O(n)=O(nlogn)
// merge sort is stable