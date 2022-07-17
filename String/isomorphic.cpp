#include<bits/stdc++.h>
using namespace std;
bool helper(string s, string t) {

    unordered_map<char , char>u;
        
        for(int i = 0 ; i < s.size() ; i++)
        {
            if(u.find(s[i])!=u.end())
            {
                if(u[s[i]] !=t[i])
                {
                    return false;
                }
            }
            else
            {
                u[s[i]]= t[i];
            }
        }
        return true;
    }
    bool isIsomorphic(string s , string t)
    {
        return helper(s,t) && helper(t,s);
    }
int main()
{
 string s,t;

 cin>>s>>t;
 cout<<isIsomorphic(s,t);
}
  