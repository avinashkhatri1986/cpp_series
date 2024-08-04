//https://leetcode.com/problems/remove-element/?envType=study-plan-v2&envId=top-interview-150

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int a = 0, b = 0;
        while (b < nums.size()) {
            if (nums[b] != val) {
                nums[a] = nums[b];
                a++;
            }
            b++;
        }
        return a;
    }
};
