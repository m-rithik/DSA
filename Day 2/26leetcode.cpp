//26.Remove Duplicates from Sorted Array

class Solution {
 public:
  int removeDuplicates(vector<int>& nums) {
    int j = 1;

    for ( int i=1;i<nums.size();i++){
      if (nums[i]!=nums[i-1]){
        nums[j] = nums[i];
        j++;
      }
    }
    return j;
    
  }
};

/*
for a arry just run a for loop that starts with 1 and if ith element is != to i-1 return j as the number of elements */