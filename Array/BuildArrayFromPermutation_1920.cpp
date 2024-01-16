class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans;
        vector<int> num2;
        for(int i=0;i<nums.size();i++){
           num2.push_back(nums[nums[i]]);
           ans.push_back(num2[i]);
        }
        return ans;
    }
};