class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
      int n = nums1.size();
      long long k = (long long)k1 + k2;
       vector<long long> cnt(100001,0);
       int mx=0;
       for(int i=0;i<n;i++){
        int d = abs(nums1[i] - nums2[i]);
        cnt[d]++;
        mx=max(mx , d);
       }
       for(int d=mx;d>0 && k>0;d--){
        if(cnt[d]==0) continue;
        long long move = min(k,cnt[d]);
        cnt[d] -= move;
        cnt[d-1] += move;
        k -=move;
       }
       long long ans=0;
       for(long long d=1;d<= mx;d++){
        ans += cnt[d]*d*d;
        
       }
       return ans;
    }
};