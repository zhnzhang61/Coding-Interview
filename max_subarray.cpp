//Find the contiguous subarray within an array (containing at least one number) which has the largest sum.

class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int ans = nums[0];
        int sum = 0;
        int n = nums.size();
        for(int i =0; i < n; i++)
        {
            sum += nums[i];//track the current sum
            ans = max(sum,ans);//maintain a max sum
            sum = max(sum, 0);//if the sum falls below 0, start from a new element
        }
        return ans;
    }
};