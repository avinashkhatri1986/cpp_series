/*
Problem statement
You have been given an integer array/list(ARR) of size 'N'. It only contains 0s, 1s and 2s. Write a solution to sort this array/list.

Note :
Try to solve the problem in 'Single Scan'. ' Single Scan' refers to iterating over the array/list just once or to put it in other words,
 you will be visiting each element in the array/list just once.

Sol1: Count numbers and then put 
Sol2 : Sort and put 
Sol3 : Ductch Flag algo
Traverse over the array till mid <= hi, according to the value of arr[mid] we can have three cases:

arr[mid] = 0, then swap arr[lo] and arr[mid] and increment lo by 1 because all the zeros are till index lo – 1 and move to the next element so increment mid by 1.
arr[mid] = 1, then move to the next element so increment mid by 1.
arr[mid] = 2, then swap arr[mid] and arr[hi] and decrement hi by 1 because all the twos are from index hi + 1 to N – 1. Now, we don’t move to the next element because the
 element which is now at index mid can be a 0 and therefore needs to be checked again.



*/
#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   int l=0,m=0,h=n-1;
   while(m<=h)
   {
      switch(arr[m])
      {
         case 0:
            swap(arr[l++],arr[m++]);
            break;
         case 1:
            m++;
            break;
         case 2:
            swap(arr[m],arr[h--]);
            break;
      }
    }
}