class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for(int i=0;i<nums.size();i++){
            int p=nums[i];
            if(seen.count(p)){
            return true;}
            seen.insert(p);
        }
        
        return false;
    }
};