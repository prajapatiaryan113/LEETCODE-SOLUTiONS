class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
      if (k <= 1)
        return 0;

    int count = 0;
    int si = 0;
    int p = 1;

    for (int ei = 0; ei < nums.size(); ei++)
    {
        p *= nums[ei];

        while(p >= k)
        {
            p /= nums[si];
            si++;
        }
        count += (ei - si + 1);
    }

    return count;
    }
};