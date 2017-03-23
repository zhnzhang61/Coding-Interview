class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
        int n = nums.size();
        if(n<=0) return 0;
        if(n == 1) return nums[0];
        int ans, curmax,curmin;
        ans = curmax = curmin = nums[0];//maintain a current max and a current min
        for (int i = 1; i < n; i++)
        {
            int temp = curmax;
            curmax = max(max(curmax*nums[i],curmin*nums[i]),nums[i]);//current min could be the max in absolute value
            curmin = min(min(temp*nums[i],curmin*nums[i]),nums[i]);//current max could be the next current min if it is timed by a negative number
            ans = max(ans,curmax);
        }
        return ans;
    }
};