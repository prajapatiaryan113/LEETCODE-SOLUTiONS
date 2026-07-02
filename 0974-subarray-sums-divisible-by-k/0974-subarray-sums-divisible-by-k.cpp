class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
          
       int total = 0;
int psum = 0;

unordered_map<int,int> m;
m[0] = 1;

for (int x : nums)
{
    psum += x;

    int rem = (psum % k + k) % k;


        total += m[rem];

    m[rem]++;
}

return total;
    }
};