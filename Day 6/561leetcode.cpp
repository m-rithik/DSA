//561. Array Partition

class Solution {
 public:
  int arrayPairSum(vector<int>& nums) {
    int ans = 0;

    ranges::sort(nums);

    for (int i = 0; i < nums.size(); i += 2)
      ans += nums[i];

    return ans;
  }
};

/*
so in this first we sort the array 

Input: nums = [1,4,3,2]
Output: 4
Explanation: All possible pairings (ignoring the ordering of elements) are:
1. (1, 4), (2, 3) -> min(1, 4) + min(2, 3) = 1 + 2 = 3
2. (1, 3), (2, 4) -> min(1, 3) + min(2, 4) = 1 + 2 = 3
3. (1, 2), (3, 4) -> min(1, 2) + min(3, 4) = 1 + 3 = 4
So the maximum possible sum is 4.

as it is 2n...i+=2 and we move throught the array and increment the ans accordingly 

*/