class Solution {
public:
    bool checkDivisibility(int n) {
        int temp=n;
        long long sum;
        long long digit_sum=0;
        long long digit_product=1;
        while(n>0){
            int rem=n%10;
            digit_sum+=rem;
            digit_product*=rem;
            n=n/10;
        }
        sum=digit_sum+digit_product;
        return temp%sum==0;
    }
};