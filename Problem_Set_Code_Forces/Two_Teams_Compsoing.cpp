/*
You have n students under your control and you have to compose exactly two teams consisting of some subset of your students. Each student had his own skill, the i-th student skill is denoted by an integer ai (different students can have the same skills).

So, about the teams. Firstly, these two teams should have the same size. Two more constraints:

The first team should consist of students with distinct skills (i.e. all skills in the first team are unique).
The second team should consist of students with the same skills (i.e. all skills in the second team are equal).
Note that it is permissible that some student of the first team has the same skill as a student of the second team.

Consider some examples (skills are given):

[1,2,3], [4,4] is not a good pair of teams because sizes should be the same;
[1,1,2], [3,3,3] is not a good pair of teams because the first team should not contain students with the same skills;
[1,2,3], [3,4,4] is not a good pair of teams because the second team should contain students with the same skills;
[1,2,3], [3,3,3] is a good pair of teams;
[5], [6] is a good pair of teams.
Your task is to find the maximum possible size x for which it is possible to compose a valid pair of teams, where each team size is x (skills in the first team needed to be unique, skills in the second team should be the same between them). A student cannot be part of more than one team.

You have to answer t independent test cases.

Input
The first line of the input contains one integer t (1≤t≤104) — the number of test cases. Then t test cases follow.

The first line of the test case contains one integer n (1≤n≤2⋅105) — the number of students. The second line of the test case contains n integers a1,a2,…,an (1≤ai≤n), where ai is the skill of the i-th student. Different students can have the same skills.

It is guaranteed that the sum of n over all test cases does not exceed 2⋅105 (∑n≤2⋅105).

Output
For each test case, print the answer — the maximum possible size x for which it is possible to compose a valid pair of teams, where each team size is x.

*/
#include <bits/stdc++.h>
using namespace std;
long long solve(long long arr[] , long long n)
{
    long long freq[n+1] = {0};
    long long val1,val2;
    if(n==1)
    {
        return 0;
    }
    else
    {
        long long count_unique = 0;
        long long count_same = 0;
        for(int i = 0; i <n ; i++)
        {
            if(freq[arr[i]]==0)
            {
                freq[arr[i]]++;
                count_unique++;
                count_same = max(count_same,freq[arr[i]]);
            }
            else
            {
                freq[arr[i]]++;
                count_same = max(count_same,freq[arr[i]]);
            }
        }
    
        if(count_same==count_unique-1)
        {
            return count_same;
        }
        
        else
        {
             val1 = min(count_same,count_unique-1);
             val2 = min(count_unique,count_same-1);
            
        }
    }
    
    return max(val1,val2);

}
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long arr[n];
        for(int i = 0; i < n; i++)
        {
            cin>>arr[i];
            
        }
        cout<<solve(arr,n)<<endl;
    }
    return 0;
}
