class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int c=0;
        int p=1;
        while(p<nums.size())
        {
            if(nums[p]==nums[c])
                return 1;
            p++;
            if(p==nums.size())
            {
                c++;
                p=c+1;
            }
        }
        return 0;
    }
};