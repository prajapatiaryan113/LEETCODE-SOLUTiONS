class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
      int total=0;
      unordered_map<int ,int>m;
      m[0]=1;
      int psum;
      for(int num:nums){
        psum+=num;
        if(m.count(psum-k)){
            total+=m[psum-k];
            m[psum]++;
        }
        else
        m[psum]++;
      }  
      return total;
    }
};