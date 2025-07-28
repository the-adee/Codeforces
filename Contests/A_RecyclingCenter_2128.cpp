#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, c;
        cin >> n >> c;
        
        vector<long long> bags(n);
        for (int i = 0; i < n; i++) {
            cin >> bags[i];
        }
        
        int coins = 0;
        
        while (!bags.empty()) {
            int best_free_index = -1;
            long long max_free_weight = 0;
            
            for (int i = 0; i < bags.size(); i++) {
                if (bags[i] <= c && bags[i] > max_free_weight) {
                    best_free_index = i;
                    max_free_weight = bags[i];
                }
            }
            
            if (best_free_index != -1) {
                bags.erase(bags.begin() + best_free_index);
            } else {
                bags.erase(bags.begin());
                coins++;
            }
            
            for (int i = 0; i < bags.size(); i++) {
                bags[i] *= 2;
            }
        }
        
        cout << coins << endl;
    }
    
    return 0;
}