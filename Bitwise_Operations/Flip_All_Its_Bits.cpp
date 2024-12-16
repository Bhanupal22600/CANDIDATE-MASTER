#include <iostream>
using namespace std;

int max_power_of2(int n) {
    n = n | (n >> 1);  // e.g., n=110000
    n = n | (n >> 2);  // e.g., n=111100
    n = n | (n >> 4);  // e.g., n=111111
    n = n | (n >> 8);
    n = n | (n >> 16);
    return n;
}

int main() {
    int n = 8;  // 10111 in binary
    int m = 7;  // m becomes the highest bits all set up to the bit length of n
    int flipped =n ^ m;  // XOR with m to flip all bits of n
    int fl=m%(n ^ m);
    cout << flipped << endl;
    cout<<fl;
    return 0;
}
