#include<bits/stdc++.h>
using namespace std;


int call(int n , vector<int>&arr)
{
  int current = 0,max_reach = 0 ,jump=0;
    
    for(int i = 0 ; i < n-1 ;i++)
    {
      max_reach = max(max_reach , i+arr[i]);
      if(i== current)
      {
        jump++;
        current = max_reach;
      }
    }
    return jump;
}
int main()
{
    int n;cin>>n;
    vector<int>arr(n);

    for(int i = 0 ; i < n ;i++)
    {

            cin>>arr[i];
    }
    cout<<call(n , arr);
}