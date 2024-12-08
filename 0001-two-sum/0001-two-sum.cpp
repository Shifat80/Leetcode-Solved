class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>>idx;
        for (int i = 0; i < nums.size(); i++) {
            idx.push_back({nums[i], i});
        }
        sort(idx.begin(),idx.end());
        int n=nums.size();
        int l=0,h=n-1;
        while (l < h) {
            int sum = idx[l].first + idx[h].first;
            if (sum < target) {
                l++;
            } else if (sum > target) {
                h--;
            } else {
                return {idx[l].second, idx[h].second};
            }
        }
        return {};
    }
};