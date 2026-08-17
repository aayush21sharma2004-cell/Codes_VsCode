#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

// This is the exact class we just built!
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> count;
        
        // 1. Build the map
        for(int i = 0; i < arr.size(); i++) {
            count[arr[i]]++; 
        }

        // --- NEW: PRINT THE MAP HERE ---
        cout << "\nTally Sheet Contents:" << endl;
        for(auto i : count) {
            // i.first is the Key (the number), i.second is the Value (the count)
            cout << "Number: " << i.first << "  ->  Count: " << i.second << endl;
        }
        cout << "-----------------------" << endl;
        // -------------------------------

        unordered_set<int> uniqueFreq;
        
        // 2. Check for unique count
        for(auto i : count) {
            uniqueFreq.insert(i.second); 
        }

        return count.size() == uniqueFreq.size();
    }
};