class Solution {
public:
    
    int sumofsquare(int n)
    {
        int dum;
        int sum=0;
        while(n!=0)
        {
            dum=n%10;
            sum=sum+(dum*dum);
            n=n/10;
        }
        return sum;

    }

    bool isHappy(int n) {
        int slow=n,fast=sumofsquare(n);

        while(slow!=fast){
            fast=sumofsquare(fast);
            fast=sumofsquare(fast);
            slow=sumofsquare(slow);
        }
        return fast==1;
    }
};
