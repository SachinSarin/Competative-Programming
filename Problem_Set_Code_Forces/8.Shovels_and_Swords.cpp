#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int solve(int s , int d)
{
   int ans = min(s,min(d,((s+d)/3)));
   return ans;
}
int main()
{
 int t;
 cin>>t;
 while(t--)
 
    {
         int s , d;
         cin>>s>>d;
        cout<<solve(s,d)<<endl;
    }

  return 0;
}
