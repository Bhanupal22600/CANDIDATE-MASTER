#include <bits/stdc++.h>
using namespace std;

class Cricketer{
public:
    int runs;
    int wickets;
    int average;
};
class Engineer{
public:
    int experience;
    string domain;
};
class phodu: public Engineer,Cricketer{//multiple inheritance 
public:
    string name;
};
int main() {
    
}