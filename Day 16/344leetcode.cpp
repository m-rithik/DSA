//344. Reverse String

class Solution {
public:
    void reverseString(vector<char>& s) {
    int i= 0;
    int r = s.size() - 1;

    while (i < r)
      swap(s[i++], s[r--]);
    
    }
};

/*
just swap the ith index that is the start with r that is the end with each other and incremnt and decrement respectively
until i=r*/