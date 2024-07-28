#include <iostream>
using namespace std;
class Solution {
public:
    bool isPowerOfTwo(int n) {
        uint s =n,m=0 ;
        if (n==0)
            return false;
        if(n <0)
        {
            n=abs(n);
        }
        while(s>0)
        {
            s>>=1;
            m<<=1;
            if(m<INT_MAX)
            m = m+1;
        }
        if ((n^m) == (n-1))
            return true;
        else
            return false;
    }
};

int main()
{
    int n ;
    cout <<"Enter number";
    cin >> n;
    Solution s =  Solution();
    cout <<"PowerofTwo: " <<s.isPowerOfTwo(n) <<endl;
    return 0;
}