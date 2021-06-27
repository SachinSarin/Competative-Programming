#include <iostream>
#include<algorithm>
#include <iomanip>  
using namespace std;

int main() {
	// your code goes here
	int n , l;
	cin>>n>>l;
    int arr[n];

	for(int i = 0; i < n; i++)
	{
	    cin>>arr[i];
	    
	}
	sort(arr,arr+n);
	double left_outside_bound = arr[0]-0;
	double right_outside_bound = l-arr[n-1];
	double max_val=0;
	for(int i = 1; i < n; i++)
	{
	    double temp = arr[i]-arr[i-1];
	    max_val = max(max_val,temp);
	}
	max_val = max_val/2;
	double result = max(max_val,max(left_outside_bound,right_outside_bound));
	cout<<fixed<<setprecision(10)<<result<<endl;
	return 0;
}
