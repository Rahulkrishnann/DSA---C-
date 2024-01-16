class Solution {
public:
    vector<int> buildArray(vector<int>& num) {
        vector<int> ans;
        vector<int> num2;
        for(int i=0;i<num.size();i++){
           num2.push_back(num[num[i]]);
           ans.push_back(num2[i]);
        }
        return ans;
    }
};