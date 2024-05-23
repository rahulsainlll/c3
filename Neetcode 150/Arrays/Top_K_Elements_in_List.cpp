// https://leetcode.com/problems/top-k-frequent-elements/description/

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map< int , int > freqMap;
        vector<vector<int>> buckets(nums.size() + 1);
        vector<int> result;

        for ( auto& n : nums){
            freqMap[n]++;
        }

        for ( auto& [num, freq]: freqMap){
            buckets[freq].push_back(num);
        }

        for ( int i = buckets.size() - 1 ; i >= 0 && result.size() < k ; --i){
            for ( auto& num: buckets[i]){
                result.push_back(num);
                if(result.size() == k){
                    break;
                }
            }
        }

        return result;
    }
};