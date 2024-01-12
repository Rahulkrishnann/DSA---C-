class Solution{
public:
vector<int> twosum(vector<int> &nums,int target){
    unordered_map<int,int> numMap;
    int n=nums.size();
    for(int i=0;i<n;i++){
        int com = target-nums[i];
        if(numMap.count(com)){
            return {numMap[com],i};
        }
        numMap[nums[i]] = i;
    }
    return{};
}
}