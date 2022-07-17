#include<bits/stdc++.h>
using namespace std;

int merge(vector<int>&arr1 , vector<int>&arr2 , int m , int n)
{
    int a = 0 , b = 0 , c= m-1;

    while(a <= c && b< n)
    {
       if(arr1[a] < arr2[b])
       {
        a++;
       } 
       else
       {
        swap(arr1[c--] , arr2[b++]);
        
       }
    }
    sort(arr1.begin() , arr1.end());
    sort(arr2.begin() , arr2.end());
}
int main()
{
    int m , n ;cin>>m>>n;
    vector<int>arr1(m) , arr2(n);

    for(int i =  0 ;  i< m ; i++)
    {
        cin>>arr1[i];
    }
    for(int i =  0 ;  i< n ; i++)
    {
        cin>>arr2[i];
    }

    merge(arr1 , arr2 , m , n );
    for(int i =  0 ;  i< m ; i++)
    {
        cout<<arr1[i]<<" ";
    }

    cout<<endl;
        for(int i =  0 ;  i< n ; i++)
    {
        cout<<arr2[i]<<" ";
    }
    
}