#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> P(N), Q(N), bib_at_person(N), result(N);

    // Read P array (who is staring at whom)
    for (int i = 0; i < N; i++) {
        cin >> P[i];
    }
    
    // Read Q array (bib numbers) and store bib number at each person's position
    for (int i = 0; i < N; i++) {
        cin >> Q[i];
        bib_at_person[i + 1] = Q[i]; // Since persons are 1-based
    }
    
    // Compute result array
    for (int i = 0; i < N; i++) {
        result[Q[i] - 1] = bib_at_person[P[i]]; // Get the bib number of the stared-at person
    }
    
    // Print the output
    for (int i = 0; i < N; i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    
    return 0;
}
