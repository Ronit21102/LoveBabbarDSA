#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> help(vector<vector<int>>&arr , int n)
{
    

    vector<vector<int>>ans;
    if(arr.size()==0) return ans;
    sort(arr.begin() , arr.end());
    ans.push_back(arr[0]);
  int j = 0 ;
    for(int i = 1 ; i < n ; i++)
    {
        if(ans[j][1] >= arr[i][0])
        {
            ans[j][1] = max(ans[j][1] , arr[i][1]);
        }
        else
        {
            j++;
            ans.push_back(arr[i]);
        }

    }
    return ans;
}
int main()
{
    int n;cin>>n;
    vector<vector<int>>arr(n);

    for(int i = 0 ; i < n ; i++)
    {
        int x,y;cin>>x>>y;

        arr[i].push_back(x);
        arr[i].push_back(y);
    }
   vector<vector<int>> val = help(arr , n );
   
   for(int i = 0 ; i < n ; i++)
   {
    cout<<"["<<val[i][0]<<","<<val[i][1]<<"]";
   }
}