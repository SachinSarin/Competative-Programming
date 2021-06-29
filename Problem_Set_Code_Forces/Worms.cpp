/*
It is lunch time for Mole. His friend, Marmot, prepared him a nice game for lunch.

Marmot brought Mole n ordered piles of worms such that i-th pile contains ai worms. He labeled all these worms with consecutive integers: worms in first pile are labeled with numbers 1 to a1, worms in second pile are labeled with numbers a1 + 1 to a1 + a2 and so on. See the example for a better understanding.

Mole can't eat all the worms (Marmot brought a lot) and, as we all know, Mole is blind, so Marmot tells him the labels of the best juicy worms. Marmot will only give Mole a worm if Mole says correctly in which pile this worm is contained.

Poor Mole asks for your help. For all juicy worms said by Marmot, tell Mole the correct answers.

Input
The first line contains a single integer n (1 ≤ n ≤ 105), the number of piles.

The second line contains n integers a1, a2, ..., an (1 ≤ ai ≤ 103, a1 + a2 + ... + an ≤ 106), where ai is the number of worms in the i-th pile.

The third line contains single integer m (1 ≤ m ≤ 105), the number of juicy worms said by Marmot.

The fourth line contains m integers q1, q2, ..., qm (1 ≤ qi ≤ a1 + a2 + ... + an), the labels of the juicy worms.

Output
Print m lines to the standard output. The i-th line should contain an integer, representing the number of the pile where the worm labeled with the number qi is.
*/
#include <bits/stdc++.h>
using namespace std;
int solve(int num , int pre_fix[] , int n)
{
    int ans=lower_bound(pre_fix,pre_fix+n,num)-pre_fix;
    if(ans==n)
    {
        return ans;
    }
    return ans+1;
}
int main() {
	// your code goes here
	int n ;
	cin>>n;
	int arr[n];
	for(int i = 0; i < n; i++)
	{
	    cin>>arr[i];
	    
	}
	int pre_fix[n];
	pre_fix[0] = arr[0];
	for(int i = 1; i < n; i++)
	{
	    pre_fix[i] = pre_fix[i-1] + arr[i];
	  
	    
	}
	int q;
    cin>>q;
	while(q--)
	{
	    int num;
	    cin>>num;
	    cout<<solve(num,pre_fix,n)<<endl;
    	    
	}
	return 0;
}
