class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> seen;
         for(int i;i<nums.size();i++)
        {
            int compliment=target-nums[i];
            if(seen.count(compliment))
                return {seen[compliment],i};
            seen[nums[i]]=i;
        }
    }
};
