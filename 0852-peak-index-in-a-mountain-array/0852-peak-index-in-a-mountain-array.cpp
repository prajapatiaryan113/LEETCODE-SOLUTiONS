class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
          int start = 0, end = arr.size() - 1;
    
    while (start < end) {
        int mid = start + (end - start) / 2;
        
        // Minimum is in the right half
        if (arr[mid] > arr[mid+1]) { 
            end = mid ;
        } 
        // Minimum is in the left half (including mid)
        else { 
            start=mid+1;
        }
    }
    return start;
    }
};