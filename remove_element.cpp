//Given an array and a value, remove all instances of that value in place and return the new length.

class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
        int n = nums.size();//array length
        int j = 0;
        for (int i = 0; i<n; i++)
        {
            if(nums[i] == val)
            {
                j++;//if we find the element in the array, increment the count
            }
            else
            {
                nums[i-j] = nums[i];//otherwise, we move later value up
            }
        }
        return nums.size()-j;
    }
};