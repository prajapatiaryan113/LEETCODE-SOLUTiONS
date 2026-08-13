class Solution {
public:

    // Find index of minimum element (pivot)
    int findmin(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;

        while (low < high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] > nums[high]) {
                low = mid + 1;
            }
            else {
                high = mid;
            }
        }

        return low;
    }

    // Normal binary search
    int Search(vector<int>& nums, int target, int low, int high) {
        while (low <= high) {

            int mid = low + (high - low) / 2;

            if (nums[mid] == target)
                return mid;

            else if (nums[mid] < target)
                low = mid + 1;

            else
                high = mid - 1;
        }

        return -1;
    }

    int search(vector<int>& nums, int target) {

        // Step 1: Find minimum/pivot
        int minIndex = findmin(nums);
        if (target >= nums[minIndex] && target <= nums[nums.size() - 1]) {
            return Search(nums, target,minIndex,nums.size() - 1);
        }
        else {
         return Search(nums, target,0, minIndex - 1);
        }
    }
};