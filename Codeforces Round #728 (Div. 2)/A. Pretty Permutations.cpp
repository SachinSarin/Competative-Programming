#include <iostream>
#include <vector>
using namespace std;
 
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	   if(n%2==0)
	   {
	       for(int i = 1; i <= n; i+=2)
	       {
	           cout<<i+1<<" "<<i<<" ";
	       }
	   }
	   if(n%2!=0)
	   {
	       cout<<3<<" "<<1<<" "<<2<<" ";
	       for(int i = 4; i <= n; i+=2)
	       {
	           cout<<i+1<<" "<<i<<" ";
	       }
	   }
	  cout<<endl; 
	}
	return 0;
}
