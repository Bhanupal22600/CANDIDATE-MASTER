#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

void calc() {
    int n;
    cin >> n;
    vector<int> a(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // Special case: if n <= 2, it's impossible to make more than half the population unhappy
    if (n <= 2) {
        cout << -1 << endl;
        return;
    }
    
    long long total_sum = accumulate(a.begin(), a.end(), 0LL); // Total sum of wealth
    int max_wealth = *max_element(a.begin(), a.end()); // Wealth of the richest person
    
    // Initial calculation: is more than half the population unhappy?
    double avg = total_sum / static_cast<double>(n);  // Average wealth
    int unhappy_count = 0;
    
    // Count how many people are unhappy initially
    for (int i = 0; i < n; ++i) {
        if (a[i] < avg / 2.0) {
            ++unhappy_count;
        }
    }
    
    if (unhappy_count > n / 2) {
        cout << 0 << endl;  // If more than half are already unhappy, no extra gold is needed
        return;
    }
    
    // We need to keep adding gold to the richest person until the condition is met
    long long x = 0;
    while (true) {
        // Add 1 to the richest person's wealth
        ++x;
        total_sum += 1;  // Increase the total sum since we're adding 1 gold
        avg = total_sum / static_cast<double>(n);  // Recalculate the average wealth
        
        // Recount unhappy people
        unhappy_count = 0;
        for (int i = 0; i < n; ++i) {
            if (a[i] < avg / 2.0) {
                ++unhappy_count;
            } else if (a[i] == max_wealth && x > 0) {
                // The richest person's wealth is now max_wealth + x
                if (max_wealth + x < avg / 2.0) {
                    ++unhappy_count;
                }
            }
        }
        
        // Check if more than half the population is unhappy
        if (unhappy_count > n / 2) {
            cout << x << endl;  // This is the minimum value of x that makes more than half unhappy
            return;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false); // Optimizes IO operations
    cin.tie(nullptr); // Ensures cin is tied to cout
    
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        calc(); // Process each test case
    }

    return 0;
}
