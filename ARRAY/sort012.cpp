#include<bits/stdc++.h>
using namespace std;

void sort012(vector<int>&arr , int n)
{
    int left = 0 , check = 0 , right = n-1;

    while(check<=right)
    {
        if(arr[check] == 0)
        {
            swap(arr[left++] , arr[check++]);
        }
        else if(arr[check]==1)
        {
            check++;
        }
        else
        {
            swap(arr[right--] , arr[check]);
        }
    }
  
}
int main()
{
    int n;cin>>n;
    vector<int>arr(n);
    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
    }
    sort012(arr, n);
     for(int i = 0 ; i < n ; i++)
    {
        cout<<arr[i]<<" ";
    }
}