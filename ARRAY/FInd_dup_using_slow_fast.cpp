#include<bits/stdc++.h>
using namespace std;

int call(vector<int>&nums , int n)
{
    int slow = nums[0];
    int fast = nums[nums[0]];

    while(slow!=fast)
    {
        slow = nums[slow];
        fast = nums[nums[fast]];
    }
    fast = 0;
    while(slow!=fast)
    {
        slow = nums[slow];
        fast = nums[fast];
    }
    return fast;
}
int main()
{
    int n;cin>>n;

    vector<int>arr(n);
    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
    }

    cout<<call(arr , n);
}