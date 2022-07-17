#include<bits/stdc++.h>
using namespace std;
int call(int n ,vector<int>&arr , int k)
{
    priority_queue<int ,vector<int>, greater<int>>q; //0(logn) insertion and at top the value is minimum
    
    for(int i = 0 ; i < n ; i++)
    {
        q.push(arr[i]);
    }

    for(int i = 0 ; i < k-1 ; i++)
    {
        q.pop();
    }
    return q.top();
}
int main()
{
    int n , k;cin>>n>>k;
    vector<int>arr(n);
    for(int i = 0 ; i < n  ; i++)
    {
        cin>>arr[i];
    }
    cout<<call(n , arr , k);
}