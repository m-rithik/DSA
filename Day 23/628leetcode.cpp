//628. Maximum Product of Three Numbers

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        // if(nums.size()==3)
        // return nums[0]*nums[1]*nums[2];
        ranges::sort(nums);
        int n=nums.size();
        return max(nums[0]*nums[1]*nums[n-1],nums[n-1]*nums[n-2]*nums[n-3]);
        
    }
};

/*
just sort the array 
remember ranges::sort()

i did return nums[n-1] as if we have a negative value in the starting two places it gets positive 

first two lines came out to be useless once i starting considering negative values for the input */