#include <vector>
#include <unordered_map>

class Solution {
public:
    int majorityElement(std::vector<int>& nums) {
        std::unordered_map<int, int> freq; // Corrected container
        int majority_limit = nums.size() / 2;

        for (int n : nums) {
            freq[n]++; // Now valid because it's a map
            
            // Check on the fly if this number is the majority element
            if (freq[n] > majority_limit) {
                return n;
            }
        }

        return -1; // Fallback case
    }
};
