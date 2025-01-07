//1480. Running Sum of 1d Array

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        int temp=0;
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            temp+=nums[i];
            ans[i]=temp;
        }
        return ans;
    }
};

/*
nothing re you just use a for loop and as u make the sum add it to the new array*/