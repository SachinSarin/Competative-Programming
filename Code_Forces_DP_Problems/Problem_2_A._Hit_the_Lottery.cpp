/*Allen has a LOT of money. He has n dollars in the bank. For security reasons, he wants to withdraw it in cash (we will not disclose the reasons here). The denominations for dollar bills are 1, 5, 10, 20, 100. What is the minimum number of bills Allen could receive after withdrawing his entire balance?

Input
The first and only line of input contains a single integer n (1≤n≤109).

Output
Output the minimum number of bills that Allen could receive.

Examples
inputCopy
125
outputCopy
3
inputCopy
43
outputCopy
5
inputCopy
1000000000
outputCopy
10000000
Note
In the first sample case, Allen can withdraw this with a 100 dollar bill, a 20 dollar bill, and a 5 dollar bill. There is no way for Allen to receive 125 dollars in one or two bills.

In the second sample case, Allen can withdraw two 20 dollar bills and three 1 dollar bills.

In the third sample case, Allen can withdraw 100000000 (ten million!) 100 dollar bills.



*/

#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int arr[5] = {1,5,10,20,100};
	int count = 0;
	while(n!=0)
	{
	    if(n>=100)
	    {
	        n -=100;
	         count++;
	    }
	    else if(n>=20&&n<100)
	    {
	        n-=20;
	         count++;
	    }
	    else if(n>=10&&n<20)
	    {
	        n-=10;
	         count++;
	    }
	    else if(n>=5&& n < 10)
	    {
	        n-=5;
	         count++;
	    }
	    else
	    {
	        n--;
	        count++;
	    }
	}
	cout<<count<<endl;
	return 0;
}
