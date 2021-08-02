/*
An elephant decided to visit his friend. It turned out that the elephant's house is located at point 0 and his friend's house is located at point x(x > 0) of the coordinate line. In one step the elephant can move 1, 2, 3, 4 or 5 positions forward. Determine, what is the minimum number of steps he need to make in order to get to his friend's house.

Input
The first line of the input contains an integer x (1 ≤ x ≤ 1 000 000) — The coordinate of the friend's house.

Output
Print the minimum number of steps that elephant needs to make to get from point 0 to point x.

Examples
inputCopy
5
outputCopy
1
inputCopy
12
outputCopy
3
Note
In the first sample the elephant needs to make one step of length 5 to reach the point x.

In the second sample the elephant can get to point x if he moves by 3, 5 and 4. There are other ways to get the optimal answer but the elephant cannot reach x in less than three moves.
*/

#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int count = 0;
	while(n!=0)
	{
	    if(n<=1)
	    {
	        n--;
	        count++;
	    }
	    else if(n==2)
	    {
	        n = n-2;
	        count++;
	    }
	    else if(n==3)
	    {
	        n = n-3;
	        count++;
	    }
	    else if(n==4)
	    {
	        n = n - 4;
	        count++;
	    }
	    else
	    {
	        n = n-5;
	        count++;
	    }
	}
	cout<<count<<endl;
	return 0;
}
