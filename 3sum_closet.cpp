//Given an array S of n integers, find three integers in S such that the sum is closest to a given number, target. Return the sum of the three integers. You may assume that each input would have exactly one solution.
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) 
    {
        //invalid corner case
        if(nums.size() <= 2)
        {
            return -1;
        }
        
        int ret = 0;
        //first we set the distance with the largest sum
        int distance = INT_MAX;
        sort(nums.begin(),nums.end());//sort for convenience
        
        //first loop for the first element
        for(int i = 0; i < nums.size()-2; i++)
        {
            int j = i + 1;
            int k = nums.size() - 1;
            while(j < k)
            {
                //this is the temp sum
                int temp = nums[i]+nums[j]+nums[k];
                //this is the temp distance
                int temp_distance;
                //if the temporary sum is less than the target
                if(temp < target)
                {
                    //record the distance
                    temp_distance = target - temp;
                    //if the distance is less than max distance, record the sum
                    if(temp_distance < distance)
                    {
                        distance = temp_distance;
                        ret = nums[i]+nums[j]+nums[k];
                    }
                    j++;//try a larger second element
                }
                //if temporaray sum is greater than the target
                else if(temp > target)
                {
                    //record the distance
                    temp_distance = temp - target;
                    //if the distance is less than max distance, record the sum
                    if(temp_distance < distance)
                    {
                        distance = temp_distance;
                        ret = nums[i]+nums[j]+nums[k];
                    }
                    k--;//try a smaller third element
                }
                //case when the distance is 0
                else
                {
                    ret = nums[i]+ nums[j]+nums[k];
                    return ret;
                }
            }
        }
        return ret;
    }
};