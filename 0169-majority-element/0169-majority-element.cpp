class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candi;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(count==0){
                count=1;
                candi=nums[i];
            }
            else
            {
                if(candi==nums[i])
                count++;

                else
                count--;
            }
        }
        return candi;
    }
};