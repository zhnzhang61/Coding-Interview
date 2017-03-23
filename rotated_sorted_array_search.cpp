//Suppose an array sorted in ascending order is rotated at some pivot unknown to you beforehand.

//(i.e., 0 1 2 4 5 6 7 might become 4 5 6 7 0 1 2).

//You are given a target value to search. If found in the array return its index, otherwise return -1.

//You may assume no duplicate exists in the array.

class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        int low = 0, high = nums.size()-1;
        while (low < high)
        {
            int mid = (low + high)/2;
            if (nums[mid]==target)
            {
                return mid;
            }
            
            if(nums[low]<=nums[mid])
            {
                if(target >= nums[low] && target < nums[mid])
                {
                    high = mid - 1;
                }
                else
                {
                    low = mid + 1;
                }
            }
            else
            {
                if(target > nums[mid]&&target <=nums[high])
                {
                    low = mid + 1;
                }
                else
                {
                    high = mid - 1;
                }
            }
        }
        return nums[low] == target? low:-1;
    }
};