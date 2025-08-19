class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long curr = 0;   // use long long
        long long count = 0;  // use long long

        for (int x : nums) {
            if (x == 0) {
                curr++;        // extend current run
                count += curr; // add contribution
            } else {
                curr = 0;      // reset when non-zero
            }
        }

        return count;          // return result
    }
};
