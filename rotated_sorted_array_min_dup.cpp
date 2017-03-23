//Suppose an array sorted in ascending order is rotated at some pivot unknown to you beforehand.

//(i.e., 0 1 2 4 5 6 7 might become 4 5 6 7 0 1 2).

//Find the minimum element.

//he array may contain duplicates.

class Solution {
public:
    int findMin(vector<int>& nums) 
    {
        
        int start = 0, end = nums.size()-1;

        while (start < end)
        {
            if(nums[start]<nums[end])
            {
                return nums[start];
            }
            int mid = (start + end)/2;
            if(nums[mid] > nums[start])
            {
                start = mid + 1;
            }
            else if(nums[mid]<nums[start])
            {
                end = mid;
            }
            else
            {
                start ++;//if there is a duplicate, move on to the next element
            }
        }
        return nums[start];
    }
};