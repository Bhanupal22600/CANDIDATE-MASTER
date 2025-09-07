#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

// Base cases
void _print(int a){
    cerr << a;
}
void _print(long long a){
    cerr << a;
}
void _print(char a){
    cerr << a;
}
void _print(string a){
    cerr << a;
}
void _print(bool a){
    cerr << (a ? "true" : "false");
}

// Pair
template<typename T, typename U>
void _print(pair<T, U> p){
    cerr << "{";
    _print(p.first);
    cerr << ", ";
    _print(p.second);
    cerr << "}";
}

// Vector
template<typename T>
void _print(vector<T> v){
    cerr << "[";
    for(size_t i = 0; i < v.size(); i++){
        _print(v[i]);
        if(i != v.size() - 1) cerr << ", ";
    }
    cerr << "]";
}

// Set
template<typename T>
void _print(set<T> s){
    cerr << "{";
    auto it = s.begin();
    while(it != s.end()){
        _print(*it);
        ++it;
        if(it != s.end()) cerr << ", ";
    }
    cerr << "}";
}

// Unordered Set
template<typename T>
void _print(unordered_set<T> s){
    cerr << "{";
    auto it = s.begin();
    while(it != s.end()){
        _print(*it);
        ++it;
        if(it != s.end()) cerr << ", ";
    }
    cerr << "}";
}

// Map
template<typename T, typename U>
void _print(map<T, U> m){
    cerr << "{";
    auto it = m.begin();
    while(it != m.end()){
        _print(it->first);
        cerr << ": ";
        _print(it->second);
        ++it;
        if(it != m.end()) cerr << ", ";
    }
    cerr << "}";
}

// Unordered Map
template<typename T, typename U>
void _print(unordered_map<T, U> m){
    cerr << "{";
    auto it = m.begin();
    while(it != m.end()){
        _print(it->first);
        cerr << ": ";
        _print(it->second);
        ++it;
        if(it != m.end()) cerr << ", ";
    }
    cerr << "}";
}

// Deque
template<typename T>
void _print(deque<T> d){
    cerr << "[";
    for(size_t i = 0; i < d.size(); i++){
        _print(d[i]);
        if(i != d.size() - 1) cerr << ", ";
    }
    cerr << "]";
}

// Stack
template<typename T>
void _print(stack<T> s){
    cerr << "[";
    vector<T> v;
    while(!s.empty()){
        v.push_back(s.top());
        s.pop();
    }
    reverse(v.begin(), v.end());
    for(size_t i = 0; i < v.size(); i++){
        _print(v[i]);
        if(i != v.size() - 1) cerr << ", ";
    }
    cerr << "]";
}

// Queue
template<typename T>
void _print(queue<T> q){
    cerr << "[";
    vector<T> v;
    while(!q.empty()){
        v.push_back(q.front());
        q.pop();
    }
    for(size_t i = 0; i < v.size(); i++){
        _print(v[i]);
        if(i != v.size() - 1) cerr << ", ";
    }
    cerr << "]";
}

// Priority Queue (max heap by default)
template<typename T>
void _print(priority_queue<T> pq){
    cerr << "[";
    vector<T> v;
    while(!pq.empty()){
        v.push_back(pq.top());
        pq.pop();
    }
    for(size_t i = 0; i < v.size(); i++){
        _print(v[i]);
        if(i != v.size() - 1) cerr << ", ";
    }
    cerr << "]";
}

// Priority Queue with custom comparator requires extra handling and is skipped for simplicity

int main() {
    int a = 10, b = 20;
    a++;
    debug(a);
    debug(b);

    string a1 = "hello";
    debug(a1);

    vector<int> v1 = {1, 2, 3};
    debug(v1);

    vector<string> v2 = {"aa", "bb"};
    debug(v2);

    set<int> s1 = {4, 5, 6};
    debug(s1);

    unordered_set<string> us = {"x", "y"};
    debug(us);

    map<int, string> m1 = {{1, "one"}, {2, "two"}};
    debug(m1);

    unordered_map<string, int> um = {{"apple", 10}, {"banana", 20}};
    debug(um);

    deque<int> d1 = {7, 8, 9};
    debug(d1);

    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    debug(st);

    queue<int> q;
    q.push(40);
    q.push(50);
    q.push(60);
    debug(q);

    priority_queue<int> pq;
    pq.push(3);
    pq.push(1);
    pq.push(2);
    debug(pq);

    pair<int, string> p = {100, "hundred"};
    debug(p);

    return 0;
}
