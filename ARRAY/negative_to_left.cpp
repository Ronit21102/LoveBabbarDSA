#include<bits/stdc++.h>
using namespace  std;

void helper(int n , vector<int>&arr)
{
    int start = 0 , last = n-1;

    while(start <= last)
    {
        if(arr[start]<0 && arr[last]<0)
         ++start;
         else if(arr[start] <0 && arr[last] >0)
         {
            ++start ,--last;
         }
         else if(arr[start]>0 && arr[last] < 0)
         {
            swap(arr[start++] , arr[last--]);
         }
         else
         {
            --last;
         }
    }
}
int main()
{
    int n;cin>>n;
    vector<int>arr(n);

    for(int i = 0 ; i < n ; i++ )
    {
       cin>>arr[i];
    }
    helper(n,arr);
    for(int i = 0 ; i < n ; i ++)
    {
        cout<<arr[i]<<" ";
    }
}