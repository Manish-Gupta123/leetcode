class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
      int cnt=0;
      int good=0;
      for(int i=0;i<nums.size();i++){
        if(nums[i]== 1){
            cnt++;
        }
        else{
            cnt=0;
        }
        good= max(good,cnt);
      }
      return good;
    }
};