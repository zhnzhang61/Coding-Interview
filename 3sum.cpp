//Given an array S of n integers, are there elements a, b, c in S such that a + b + c = 0? Find all unique triplets in the array which gives the sum of zero.
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        //The idea is to fix the first element of the triplet and find all combination of second and third element
        //Then move on to the next first element
        
        //answer storage
        vector<vector<int>> sol;
        //Corner Case
        if(nums.size() <= 2)
            return sol;
        //Loop for the first element
        for(int i = 0; i < nums.size(); i++)
        {
            //The index of the second element
            int j = i + 1;
            //The index of the third element
            int k = nums.size() - 1;
            
            sort(nums.begin(),nums.end());
            
            while(j < k)
            {
                vector<int> triple;
                if(nums[i]+nums[j]+nums[k] == 0)
                {
                    triple.push_back(nums[i]);
                    triple.push_back(nums[j]);
                    triple.push_back(nums[k]);
                    sol.push_back(triple);
                    j++;
                    k--;
                    
                    while(j < k && nums[j-1] == nums[j])
                    {
                        j++;
                    }
                    while(j < k && nums[k] == nums[k+1])
                    {
                        k--;
                    }
                }
                else if(nums[i]+nums[j]+nums[k]<0)
                {
                    j++;
                }
                else
                {
                    k--;
                }
                while(i < nums.size() && nums[i] == nums[i+1])
                {
                    i++;
                }
            }
        }
        return sol;
        
        
    }
};