#include <iostream>
#include <vector>
#include <algorithm>

void calc() {
    int n;
    std::cin >> n;
    std::vector<int> v(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }

    // Iterate through all possible even subarray lengths
    for (int s = 2; s <= n; s += 2) {
        // Iterate through all possible starting indices for a subarray of length s
        for (int i = 0; i <= n - s; i++) {
            // Get the current subarray
            std::vector<int> u;
            for (int j = i; j < i + s; j++) {
                u.push_back(v[j]);
            }
            
            // Chef's median (element at index M = s/2)
            int bm = u[s / 2];

            // True median (element at index M-1 = s/2 - 1)
            std::sort(u.begin(), u.end());
            int true_median = u[(s / 2) - 1];
            
            // Check if the medians are different
            if (bm != true_median) {
                // Output the 1-based indices and return
                std::cout << i + 1 << " " << i + s << std::endl;
                return;
            }
        }
    }
    
    // If no valid subarray is found after checking all possibilities
    std::cout << -1 << std::endl;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    std::cin >> t;
    while (t--) {
        calc();
    }
    return 0;
}