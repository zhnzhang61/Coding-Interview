//Suppose an array sorted in ascending order is rotated at some pivot unknown to you beforehand.
class Solution {
public:
    int findMin(vector<int>& nums) 
    {
        int start = 0, end = nums.size()-1;

        while (start < end)
        {
            if(nums[start]<nums[end])//If the array is rotated, the start element should be larger than the end element
            {
                return nums[start];
            }
            int mid = (start + end)/2;
            if(nums[mid] >= nums[start])//if the mid number is larger than the start element, the min should be on the right
            {
                start = mid + 1;
            }
            else//otherwise, mean on the left
            {
                end = mid;
            }
        }
        return nums[start];
    }
};