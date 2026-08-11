class Solution {
public:
    int findMin(vector<int>& arr) {
   int start = 0, end = arr.size() - 1;
    
    while (start < end) {
        int mid = start + (end - start) / 2;
        
        // Minimum is in the right half
        if (arr[mid] > arr[end]) { 
            start = mid + 1;
        } 
        // Minimum is in the left half (including mid)
        else { 
            end = mid;
        }
    }
    return arr[start];
   }
};