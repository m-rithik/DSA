//2496. Maximum Value of a String in an Array

class Solution {
    public int maximumValue(String[] strs) {
        int ans =0;
        for(String s : strs ){
             ans = Math.max(ans, s.chars().anyMatch(c -> Character.isAlphabetic(c)) ? s.length(): Integer.valueOf(s));
        }
        return ans;
    }
}

/*
 found it easy to do in java cuz string handling syntax is better
 so here itrate through each char and find the max tht is compare with ans, and s.chars has anyMatch which is predicate which relies on C.

 c++ code is hard to understand got it from walkccc
 class Solution {
 public:
  int maximumValue(vector<string>& strs) {
    int ans = 0;
    for (const string& s : strs)
      ans = max(ans, ranges::any_of(s, [](char c) { return isalpha(c); })
                         ? static_cast<int>(s.length())
                         : stoi(s));
    return ans;
  }
    *string handling on c++*
};
 */