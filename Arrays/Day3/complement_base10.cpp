//https://leetcode.com/problems/complement-of-base-10-integer/solutions/5540745/my-solution
#include <iostream>
using namespace std;
class Solution {
public:
    int bitwiseComplement(int n) {
        int s = n;
        int m = 0;
        if (n == 0)
            return 1;
        while (s > 0) {
            s >>= 1;
            m <<= 1;

            if (m < INT_MAX)
                m = m + 1;
        }
        return (n ^ m);
    }
};

int main()
{
    int n ;
    cout <<"Enter number";
    cin >> n;
    Solution s =  Solution();
    cout <<"Complement: " <<s.bitwiseComplement(n) <<endl;
    return 0;
}