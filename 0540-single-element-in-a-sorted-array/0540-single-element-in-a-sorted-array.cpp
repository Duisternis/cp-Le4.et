class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l=0, r=nums.size()-1, m;
        while (l<=r) {
            m=l+(r-l)/2;
            if (r==l) break;
            if (nums[m]!=nums[m-1] && nums[m]!=nums[m+1]) break;
            if (((r-l-1)/2+1)%2==0) {
                if (nums[m+1]==nums[m]) l=m+2;
                else r=m-2;
            } else {
                if (nums[m+1]==nums[m]) r=m-1;
                else l=m+1;
            }
        }

        return nums[m];
    }
};