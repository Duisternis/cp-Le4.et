class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l=0, r=nums.size()-1, m=0;

        while (l<=r) {
            m=l+(r-l)/2;
            if ((m==0 || nums[m]>nums[m-1]) && (m==nums.size()-1 || nums[m]>nums[m+1])) break;
            if (nums[m]<nums[m+1]) l=m+1;
            else r=m-1;
        }

        return m;
    }
};