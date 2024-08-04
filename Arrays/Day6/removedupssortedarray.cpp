//https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/?envType=study-plan-v2&envId=top-interview-150
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int a= 0, b=0;
        while(b < nums.size())
        {
            if(nums[a]==nums[b]||a==b)
                b++;
            else if(nums[a]!=nums[b])
            {
                a++;
                nums[a]=nums[b];
            } 
        }
        return a+1;
    }
};