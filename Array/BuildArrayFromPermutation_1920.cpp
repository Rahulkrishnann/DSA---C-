class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans;
        vector<int> nums2;
        for(int i=0;i<nums.size();i++){
           nums2.push_back(nums[nums[i]]);
           ans.push_back(nums2[i]);
        }
        return ans;
    }
};