//Given nums = [2, 7, 11, 15], target = 9,

//Because nums[0] + nums[1] = 2 + 7 = 9,
//return [0, 1].

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        //construct a hash table and loop through the array
        //find the difference and match with hash table
        //corner case: array size equal to or less than 1, return nothing
        vector<int> index;
        //corner case
        if(nums.size() <= 1)
        {
            return index;
        }
        //Unordered Map, Since we need to return the index, we use the values in the array as keys and the index as value
        unordered_map <int,int> num;
        for (int i = 0; i < nums.size(); i++)
        {
            num[nums[i]] = i;
        }
        //Loop through all the elements and find the difference between each value and target
        //Find the difference in the map
        for (int i = 0; i < nums.size(); i++)
        {
            int diff = target - nums[i];
            if(num.find(diff)!=num.end())
            {
                int idx = num[diff];
                if(idx == i)
                    continue;
                if(idx < i)
                {
                    index.push_back(idx);
                    index.push_back(i);
                    return index;
                }
                else
                {
                    index.push_back(i);
                    index.push_back(idx);
                    return index;
                }
            }
        }
    }
};