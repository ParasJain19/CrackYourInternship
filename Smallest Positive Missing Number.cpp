 int missingNumber(int arr[], int n) {
        unordered_set<int> pos;
        // Add positive numbers to the set
        for (int i = 0; i < n; ++i) {
            if (arr[i] > 0) {
                pos.insert(arr[i]);
            }
        }
        
        // Find the smallest missing positive integer
        int missing = 1; // Start checking from 1
        while (pos.find(missing) != pos.end()) {
            ++missing;
        }
        
        return missing;
    }
