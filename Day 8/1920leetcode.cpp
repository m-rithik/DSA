//1920. Build Array from Permutation

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n=nums.size();

        vector<int> ans(n);
        for(int i=0;i<n;i++)
            ans[i]=nums[nums[i]];
        
        return ans;
    }
};

/*
nothing much just make annother array with takes in value of nums[nums[i]] thats it */