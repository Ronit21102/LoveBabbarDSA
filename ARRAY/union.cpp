#include<bits/stdc++.h>
using namespace std;

int call(vector<int>arr1 , vector<int>arr2 , int n , int m )
{

    int i = 0 , j = 0;
    vector<int>ans;
  while(i < n && j<m)
  {
    if(arr1[i] > arr2[j])
    {
         ans.push_back(arr2[j]);
         j++;   
    }
    else if(arr1[i] < arr2[j])
    {
        ans.push_back(arr2[j]);
        i++;
    }
    else{
        ans.push_back(arr2[j++]);
        i++;
    }
  }
for(; i < n ; i++)
{
    ans.push_back(arr1[i]);
}
for( ; j < m ; j++)
{
    ans.push_back(arr2[j]);
}
return ans.size();
}
int main()
{
    int n , m ;cin>>n>>m;
    vector<int>arr1(n) ,arr2(m);

    for(int i = 0 ; i < n; i++)
    {
        cin>>arr1[i];
    }
    for(int i  = 0 ; i < m ; i++)
    {
        cin>>arr2[i];
    }

    cout<<call(arr1 , arr2 , n , m);
}