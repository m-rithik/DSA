//121. Best Time to Buy and Sell Stock

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sell=0;
        int keep=INT_MIN;
        for(int price:prices){
            sell= max(sell,keep+price);
            keep=max(keep,-price);
        }
        return sell;
    }
};

/*
so here we comapare max profit that is possible
*it has to be linear cuz as the problem states its days so you cant go back in days 
lets take [7,1,5,3,6,4]

1st iterate
price =7
sell=max(0,-)=0
keep = -7

2nd iterate
price=1
sell=(0,-7+1)=0
keep=(-7,-1)=-1

3rd iterate
price =5
sell(0,-1+5)=4
keep=(-1,-5)=-1

4th iterate
price=3
sell(4,-1+3)=4
keep(-1,-3)=-1

5th iterate
price=6
sell(4,-1+6)=5
keep(-1,-5)=-1

6th iterate
price =4
sell(5,-1+4)=5
keep(-1,-4)=-1

ANS=4
*/