//66. Plus One

class Solution {
 public:
  vector<int> plusOne(vector<int>& digits) {
    for (int i = digits.size() - 1; i >= 0; i--) {
      if (digits[i] < 9) {
        ++digits[i];
        return digits;
      }
      digits[i] = 0;
    }
    digits.insert(digits.begin(), 1);
    return digits;
  }
};

/*
see its ntg much iterate backwords of the array and if the ending or the first iteration is less than 9 increment and return if it 9 turn it to 0 and again loop 
till the if statement satisfies and there's only one way when the loop doesnt return a value that is 

999 
as i wont return here anytthing
the array becomes 000
so use insert(position,value)
add a 1 there(common sense)
and return  */