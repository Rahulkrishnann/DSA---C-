class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int targets) {
        int count = 0;
        for(int i=0;i<hours.size();i++){
            if(hours[i]>=targets){
                count++;
            }
        }
        return count;
    }
};