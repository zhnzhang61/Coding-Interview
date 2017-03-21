class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
        int n = nums.size();
        if(n<=0) return 0;
        if(n == 1) return nums[0];
        int ans, curmax,curmin;
        ans = curmax = curmin = nums[0];
        for (int i = 1; i < n; i++)
        {
            int temp = curmax;
            curmax = max(max(curmax*nums[i],curmin*nums[i]),nums[i]);
            curmin = min(min(temp*nums[i],curmin*nums[i]),nums[i]);
            ans = max(ans,curmax);
        }
        return ans;
    }
};