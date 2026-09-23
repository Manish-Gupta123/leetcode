class Solution {
public:
int bitwiseComplement(int n){
    if(n == 0) return 1;
    int l=0;
    int temp=n;
    while(temp>0){
        l++;
        temp=temp>>1;
    }
    long long helper = (1LL << l)-1;
     return helper^n;
    }
};