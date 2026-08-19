class Solution {
public:
    bool check(int mid,vector<int>& piles,int h){
        if (mid == 0) return false; 
        long long count=0;
        for(int i=0;i<piles.size();i++)
       {
        int  t=ceil((double)piles[i]/mid);
        count+=t;
        }
        return count<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int start=0,ans=INT_MAX,end=INT_MAX;
        while(start<=end){
        int mid=start+(end-start)/2;
        if(check(mid,piles,h))
      {  ans=mid;
        end=mid-1;}
        else
        start=mid+1;
        }
        return ans;
    }
};