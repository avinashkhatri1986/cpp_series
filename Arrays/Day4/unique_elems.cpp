/*
case1: only one duplicate in array which repeats only twice
case2: duplicates repeats only twice and only only one unique element in arrary, 
all elements are integer sequence 
*/

#include <iostream>
#include <vector>
using namespace std;
int singledup_unique(vector <int> arr )
{
    int res=arr[0];
    for (int i =1;i < arr.size();i++)
    {
        res^=arr[i];
    }
    for (int i=0;i<arr.size();i++)
    {
        res^=i;
    }
    return res;
}
int only_oneunique(vector <int> arr)
{
    int res=arr[0];
    for (int i=1;i<arr.size();i++)
    {
        res^=arr[i];
    }
    return res;
}
int main()
{
    vector <int> singledup_arr = {1,3,4,5,5,2};
    vector <int> oneunique_arr = {1,1,2,2,3,3,4,5,5};
    cout << "Duplicate element is :"<<singledup_unique(singledup_arr) <<endl;
    cout << "Unique element is :"<<only_oneunique(singledup_arr) <<endl;
    
}
