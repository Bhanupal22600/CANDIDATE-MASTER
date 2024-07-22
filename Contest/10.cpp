#include <iostream>
using namespace std;

int main() {
    long long sum = 0;
    
    // Loop from 20 down to 1
    for(int i = 20; i > 0; i--) {
        long long prod = 1;
        
        // Calculate the factorial of i
        for(int j = i; j > 0; j--) {
            prod *= j;
        }
        
        // Add the factorial of i to the sum
        sum += prod;
    }
    
    // Output the final sum of factorials
    cout << sum % 5<< endl;
    
    
    return 0;
}
