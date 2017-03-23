//Given an array of integers that is already sorted in ascending order, find two numbers such that they add up to a specific target number.

//The function twoSum should return indices of the two numbers such that they add up to the target, where index1 must be less than index2. Please note that your returned answers (both index1 and index2) are not zero-based.

//You may assume that each input would have exactly one solution and you may not use the same element twice.

//Input: numbers={2, 7, 11, 15}, target=9
//Output: index1=1, index2=2


class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        int low = 0, high = numbers.size()-1;
        while(numbers[low]+numbers[high]!=target)
        {
            if(numbers[low]+numbers[high]<target)
            {
                low++;
            }
            else
            {
                high--;
            }
        }
        return vector<int>({low+1,high+1});
    }
    //Takes o(n) time:
    //When the sum is smaller than the target, increase the smaller part
    //When the sum is too large, decrease the larger part
};