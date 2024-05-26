// https://leetcode.com/problems/longest-consecutive-sequence/description/

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(), nums.end());
        int longest = 0;

        for (int n : numSet) {
            if (numSet.find(n - 1) == numSet.end()) {
                int length = 1;
                while (t) {
                    length++;
                }
                longest = max(length, longest);
            }
        }
        return longest;
    }
};
