#include<bits/stdc++.h>
using namespace std;

int main(){
set<int> st;
st.insert(2);   // {2}
st.insert(4);   // {2, 4}
st.insert(3);   // {2, 3, 4}

// Functionality of insert in vector
// can be used also, that only increases efficiency

// begin(), end(), rbegin(), rend(), size(),
// empty() and swap() are same as those of above

auto it = st.find(3);
cout<<*it<<endl;

auto t = st.find(6);
cout<<*t<<endl;
// {1, 4, 5}
st.erase(5); // erases 5 // takes logarithmic time

int cnt = st.count(1);

auto tt = st.find(3);
st.erase(tt); // it takes constant time

// {1, 2, 3, 4, 5}
auto it1 = st.find(8);
auto it2 = st.find(4);

st.erase(it1, it2); // after erase {1, 4, 5} [first, last]

// lower_bound() and upper_bound() function works in the same way
return 0;
}
// T.C=LOGN EVERY OPERATION