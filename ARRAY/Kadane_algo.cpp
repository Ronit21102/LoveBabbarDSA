#include<bits/stdc++.h>
using namespace std;
int max_subarray(vector<int>&arr , int n)
{
    int max_end_here = 0 , max_so_far = -1e9;

    for(const auto &i : arr)
    {
        
            max_end_here +=i;
        
        
        if(max_end_here > max_so_far)
        {
            max_so_far = max_end_here;
        }

        if(max_end_here < 0)
        {
            max_end_here = 0;
        }
    }
    return max_so_far;

}

int main()
{
    int n;cin>>n;
    vector<int>arr(n);

    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
    }
    cout<<max_subarray(arr, n);
}