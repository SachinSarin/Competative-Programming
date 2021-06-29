#include <bits/stdc++.h>
 
using namespace std;
// Function to find the Kth
// not divisible by N
int kthNonDivisible(int N, int K)
{
    return K + floor((K - 1) / (N - 1));
}
 
// Driver Code
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
            int N,K;
        cin>>N>>K;
 
        // Function Call
        cout << kthNonDivisible(N, K)<<endl;
    }

    return 0;
}
