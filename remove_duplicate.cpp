//Given a sorted array, remove the duplicates in place such that each element appear only once and return the new length.

//Do not allocate extra space for another array, you must do this in place with constant memory.
class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int n = nums.size();
        if(n == 0)
        {
            return 0;
        }
        int j = 0;
        for(int i = 0; i < n; i++)
        {
            if(nums[j]!=nums[i])
            {
                nums[++j] = nums[i];//j increment slower than i. specifically, j only increment when there is not a duplicate
            }
        }
        return j + 1;
    }
};