//2239. Find Closest Number to Zero

class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int close=nums[0];

        for(int i=0;i<nums.size();i++)
            if(abs(nums[i])<abs(close)||abs(nums[i])==abs(close)&& nums[i]>close)
                close=nums[i];
            
            
        return close;
    }
};

/*
assume the closest to be the 0th element 
run a for loop of the absolute values in the array*/