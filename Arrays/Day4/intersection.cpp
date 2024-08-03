#include <iostream>
#include <unordered_set>
using namespace std;
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set <int> nodups;

        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int i = 0, j=0;
        //user two pointer approach
        while(i<nums1.size() && j < nums2.size())
        {
            if (nums1[i]<nums2[j])
                i++;
            else if (nums2[j]<nums1[i])
                j++;
            else //both are equal
            {
                nodups.insert(nums1[i]);
                i++;
                j++;
            }
            
        }
        vector <int> res (nodups.begin(), nodups.end()); // this can be avoided by simply checking equal in else loop
        
        return res;
    }
};

int main()
{
    vector <int> num1 = {4,9,5};
    vector <int> num2 = {9,4,9,8,4};
    Solution s =  Solution();
    vector <int> res =  s.intersection(num1,num2);
    for (auto i:res)
    {
        cout << i << " ";
    }
    return 0;
}

