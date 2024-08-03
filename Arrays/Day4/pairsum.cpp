
#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> pairSum(vector<int> &arr, int s){
   vector<vector<int>> res;
  for (int i = 0; i < arr.size(); i++) {
    for (int j = i+1; j < arr.size(); j++) {
       if(arr[i]+arr[j] == s)
       {
           vector <int> ans;
           if (arr[i] < arr[j]) {
             ans.push_back(arr[i]);
             ans.push_back(arr[j]);
           } else {
             ans.push_back(arr[j]);
             ans.push_back(arr[i]);
           }
           res.push_back(ans);
       }
    }
  }
  sort(res.begin(),res.end());
  return res;
}