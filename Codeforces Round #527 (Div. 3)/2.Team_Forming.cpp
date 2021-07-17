/*
There are n students in a university. The number of students is even. The i-th student has programming skill equal to ai.

The coach wants to form n2 teams. Each team should consist of exactly two students, and each student should belong to exactly one team. Two students can form a team only if their skills are equal (otherwise they cannot understand each other and cannot form a team).

Students can solve problems to increase their skill. One solved problem increases the skill by one.

The coach wants to know the minimum total number of problems students should solve to form exactly n2 teams (i.e. each pair of students should form a team). Your task is to find this number.

Input
The first line of the input contains one integer n (2≤n≤100) — the number of students. It is guaranteed that n is even.

The second line of the input contains n integers a1,a2,…,an (1≤ai≤100), where ai is the skill of the i-th student.

Output
Print one number — the minimum total number of problems students should solve to form exactly n2 teams.
*/
#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	if(n==1)
	{
	    cout<<0<<endl;
	}
	int arr[n];
	for(int i = 0; i < n; i++)
	{
	    cin>>arr[i];
	}
	sort(arr,arr+n);
	int i = 0;
	int j = 1;
	int noproblems = 0;
	while(j < n)
	{
	    if(arr[i]==arr[j])
	    {
	        i+=2;
	        j+=2;
	        
	    }
	    else
	    {
	        noproblems+=(arr[j]-arr[i]);
	        i+=2;
	        j+=2;
	    }
	}
	cout<<noproblems<<endl;
	return 0;
}
