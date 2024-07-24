#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n,bin=0,r,q,c=0;
    cout << "Enter the binary ";
    cin >> n;
    while (q != 0)
    {
        q=n/10;
        r=n%10;
        if(r==1)
            bin+=pow(2,c);
        c++;
        n=q;
    }
    cout << "Number is :" <<bin <<endl;
    return 0;
}