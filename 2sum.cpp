//Given nums = [2, 7, 11, 15], target = 9,

//Because nums[0] + nums[1] = 2 + 7 = 9,
//return [0, 1].

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector <int> out;//store output indices
        if(nums.size()<=1)
            return out;
        unordered_map <int,int> map1;
        for(int i = 0; i < nums.size(); i++)
        {
            map1[nums[i]] = i;
        }
        
        for(int i = 0; i < nums.size(); i++)
        {
            int diff = target - nums[i];
            if(map1.find(diff)!=map1.end())
            {
                int index = map1[diff];
                if(index == i)
                    continue;
                if(index < i)
                {
                    out.push_back(index);
                    out.push_back(i);
                    return out;
                }
                else
                {
                    out.push_back(i);
                    out.push_back(index);
                    return out;
                }
            }
        }
    }
};