class Solution {
  public:
   bool ispossible(vector<int> &arr, int k, int mid) {
    int pos = arr[0];
    int c = 1;

    for(int i = 1; i < arr.size(); i++) {

        if(arr[i] - pos >= mid) {
            pos = arr[i];
            c++;
            
        if(c == k)
            return true;
        
    }
    }
    return false;
}

int maxDistance(vector<int> &arr, int k) {
sort(arr.begin(),arr.end());
    int low = 1;
    int high = arr[arr.size() - 1] - arr[0];
    int ans = 0;

    while(low <= high) {

        int mid = low + (high - low) / 2;

        if(ispossible(arr, k, mid)) {
            ans = mid;
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return ans;
    }
};