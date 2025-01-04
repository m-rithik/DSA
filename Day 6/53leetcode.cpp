//53. Maximum Subarray

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int one;
        int maxs;
        for(int i=0;i<nums.size();i++){
                maxs=max(maxs+nums[i],nums[i]);
                one=max(one,maxs);
        }

        return one;
    }
};

/*
using inbuilt max to determine max in subarray*/