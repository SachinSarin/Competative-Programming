/*
Petya has an array a consisting of n integers. He wants to remove duplicate (equal) elements.

Petya wants to leave only the rightmost entry (occurrence) for each element of the array. The relative order of the remaining unique elements should not be changed.

Input
The first line contains a single integer n (1≤n≤50) — the number of elements in Petya's array.

The following line contains a sequence a1,a2,…,an (1≤ai≤1000) — the Petya's array.

Output
In the first line print integer x — the number of elements which will be left in Petya's array after he removed the duplicates.

In the second line print x integers separated with a space — Petya's array after he removed the duplicates. For each unique element only the rightmost entry should be left.
*/
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
vector<int> solve(int arr[] , int n)
{
    vector<int> temp;
    temp.push_back(arr[n-1]);
    for(int i = n-2; i>=0; i--)
    {
        //searching
        int j = 0;
        for(; j < temp.size(); j++)
        {
            if(arr[i]==temp[j])
            {
                break;
            }
            
            
        }
        if(j==temp.size())
        {
            temp.push_back(arr[i]);
        }
        
    }
    reverse(temp.begin(),temp.end());
    return temp;
    
}
int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0; i < n; i++)
	{
	    cin>>arr[i];
	}
	vector<int> res;
	res = solve(arr,n);
	cout<<res.size()<<endl;
	for(int i = 0; i < res.size(); i++)
	{
	    cout<<res[i]<<" ";
	}
	return 0;
}
