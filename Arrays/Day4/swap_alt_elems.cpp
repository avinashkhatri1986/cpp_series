#include <iostream>
using namespace std;

void swap(int arr[],int l)
{
    for(int i =0;i <l; i+=2)
    {
        int next=i+1;
        if(next <l )
        {
            int tmp = arr[i];
            arr[i]=arr[next];
            arr[next]=tmp;
        }
    }

}
int main()
{
    int arr[]={9,2,3,6,7,2};
    swap(arr,sizeof(arr)/4);
    for (auto i:arr)
    {
        cout << i << " ";
    }
    return 0;
}