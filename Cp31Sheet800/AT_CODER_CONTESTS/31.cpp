#include <iostream>
#include <vector>
#include <unordered_map>
#include <iomanip>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<vector<int>> dice(N);
    vector<int> K(N);

    // Read input
    for (int i = 0; i < N; i++) {
        cin >> K[i];
        dice[i].resize(K[i]);
        for (int j = 0; j < K[i]; j++) {
            cin >> dice[i][j];
        }
    }

    double maxProbability = 0.0;

    // Compare all pairs of dice
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            unordered_map<int, int> freq;

            // Count occurrences of numbers on dice i
            for (int num : dice[i]) {
                freq[num]++;
            }

            int commonCount = 0;
            for (int num : dice[j]) {
                if (freq[num] > 0) {
                    commonCount++;
                }
            }

            // Compute probability
            double probability = (double)commonCount / (K[i] * K[j]);

            // Update maximum probability
            maxProbability = max(maxProbability, probability);
        }
    }

    // Print result with required precision
    cout << fixed << setprecision(9) << maxProbability << endl;

    return 0;
}
