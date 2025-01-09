//2185. Counting Words With a Given Prefix

class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count=0;

        for(const string& word:words){
            if(word.substr(0,pref.size())==pref){
                count++;
            }
        }
        return count;
    }
};

/*
for loop through words string and if word starting from 0th inddex to pref size == pref
count++
*/