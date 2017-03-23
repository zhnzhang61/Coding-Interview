//Check if an array contains any duplicate elements
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        return set<int>(nums.begin(),nums.end()).size() < nums.size();
    }
};



//Given an array of integers and an integer k, find out whether there are two distinct indices i and j in the array such that nums[i] = nums[j] and the absolute difference between i and j is at most k.
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) 
    {
        unordered_set<int> s;
        if(k <= 0) return false;
        if(k >= nums.size()) k = nums.size() - 1;
        
        for(int i = 0; i < nums.size(); i++)
        {
            if(i > k) s.erase(nums[i - k - 1]);
            if(s.find(nums[i])!=s.end()) return true;
            s.insert(nums[i]);
        }
        return false;
    }
};
