#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int n,c=0,b=0,q,r;
    cout <<"Enter the number";
    cin >> n;
    while (q != 0)
    {
        q=n/2;
        r=n%2;
        b+=pow(10,c)*r;
        c++;
        n=q;
    }
    cout <<"Binary number is " << b <<endl; 

    return 0;
}