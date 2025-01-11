//485. Max Consecutive Ones

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=0;
        int old=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                ans++;
            }else 
                ans=0;
            if(ans>old)
                old=ans;
            }
        
        return old;
    }
};

/*
lol tested patience very simple but was lacking in using the if-else intresting tho*/