//1446. Consecutive Characters

class Solution {
public:
    int maxPower(string s) {
        int ans=1;
        int temp=1;
        for(int i=1;i<s.length();i++){
            if(s[i]==s[i-1]){
                temp++;
            }else{
                temp=1;
            }
            ans=ans>temp?ans:temp;
        }
        return ans;
    }
};

/*
very similar to last question but here there is more than  binary but simple, */