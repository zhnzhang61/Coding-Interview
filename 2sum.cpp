//Given nums = [2, 7, 11, 15], target = 9,

//Because nums[0] + nums[1] = 2 + 7 = 9,
//return [0, 1].

class Solution
{
public:
	vector <int> twoSum(vector<int> & nums,int target)
	{
		vector<int> ret;
        //base case
        if(nums.size()<=1)
            return ret;
        //Hash table
        unordered_map<int,int> sum;
        for(int i = 0; i < nums.size(); i++)
        {
            sum[nums[i]] = i;
        }
        //loop through 1 element 
        for(int i = 0; i < nums.size(); i++)
        {
            int rest_val = target - nums[i];//find the other element
            if(sum.find(rest_val)!=sum.end())
            {
                int index = sum[rest_val];//index of the other value
                if(index == i)
                {
                    continue;//do not take this value if these two values are the same
                }
                if(index < i)//if this number is before the loop number
                {
                    ret.push_back(index);
                    ret.push_back(i);
                    return ret;//hash index before loop index
                }
                else
                {
                    ret.push_back(i);
                    ret.push_back(index);
                    return ret;//loop index before hash index
                }
            }
        }
		

	}

}