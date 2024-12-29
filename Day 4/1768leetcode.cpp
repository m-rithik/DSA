//1768. Merge Strings Alternately

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result;
        int i=0,j=0;
        while (i < word1.length() && j < word2.length()) {
        result += word1[i];
        result += word2[j];
        i++;
        j++;
        }if(i<word1.length()){
            result+=word1.substr(i);
        }if(j<word2.length()){
            result+=word2.substr(j);
        }return result;
    }
};

/*
make a new string result containing the answer
in while loop, loop till both the length and of the string satisfy the length
and if one string is longer than the other add the rest of the part using substr that will continue till the end of the string and add the remaining part.*/