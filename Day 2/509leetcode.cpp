//509 Fibonacci number

class Solution {
public:
    int fib(int n) {
        if(n==0)
        return 0;
        if(n==1)
        return 1;

        int one=0,second=1;
        for(int i=1;i<=n;i++){
            int third=one+second;
            one=second;
            second=third;
        }
        return one;
    }
};

/*
for a given number n each number is the sum of the two preceding ones
so as it start with 0 and one keep adding till =n and swap and move forward */