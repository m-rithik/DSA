//2255. Count Prefixes of a Given String

class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int count=0;

        for(const string& word:words){
            if(s.substr(0,word.size())==word){
                count++;
            }
        }
        return count;
    }
};

/*
just like last one use substr
but if s is substr of 0th index of itself and the size of word == word
count++
*/