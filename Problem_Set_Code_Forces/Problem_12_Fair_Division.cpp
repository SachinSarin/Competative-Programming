/*

Alice and Bob received n candies from their parents. Each candy weighs either 1 gram or 2 grams. Now they want to divide all candies among themselves fairly so that the total weight of Alice's candies is equal to the total weight of Bob's candies.

Check if they can do that.

Note that candies are not allowed to be cut in half.

Input
The first line contains one integer t (1≤t≤104) — the number of test cases. Then t test cases follow.

The first line of each test case contains an integer n (1≤n≤100) — the number of candies that Alice and Bob received.

The next line contains n integers a1,a2,…,an — the weights of the candies. The weight of each candy is either 1 or 2.

It is guaranteed that the sum of n over all test cases does not exceed 105.

Output
For each test case, output on a separate line:

"YES", if all candies can be divided into two sets with the same weight;
"NO" otherwise.
You can output "YES" and "NO" in any case (for example, the strings yEs, yes, Yes and YES will be recognized as positive).
*/
#include<bits/stdc++.h>
using namespace std;
bool ispossbile(int n , int arr[])
{
   int sum = 0;
   unordered_map<int,int> mp;
   for(int i = 0; i < n; i++)
   {
       mp[arr[i]]++;
   }
   for(int i = 0; i <  n; i++)
   {
       sum+=arr[i];
   }
   if(sum%2!=0)
   {
       return false;
   }
   
   int founndones = 0;
  
   for(auto x : mp)
   {
    
        if(x.first==1)
        {
        founndones = x.second;
        }   
   }
   sum = sum/2;
   if(sum%2==0 || (sum%2==1&& founndones!=0))
   {
       return true;
   }
   if(founndones >=2)
   {
       return true;
   }
   return false;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        if(ispossbile(n,arr))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
