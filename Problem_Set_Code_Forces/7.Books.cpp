/*
When Valera has got some free time, he goes to the library to read some books. Today he's got t free minutes to read. That's why Valera took n books in the library and for each book he estimated the time he is going to need to read it. Let's number the books by integers from 1 to n. Valera needs ai minutes to read the i-th book.

Valera decided to choose an arbitrary book with number i and read the books one by one, starting from this book. In other words, he will first read book number i, then book number i + 1, then book number i + 2 and so on. He continues the process until he either runs out of the free time or finishes reading the n-th book. Valera reads each book up to the end, that is, he doesn't start reading the book if he doesn't have enough free time to finish reading it.

Print the maximum number of books Valera can read.
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    
 
    long int n,t,start=0,ending=0;
    cin>>n>>t;
    long int arr[n];
    for(long int i=0;i<n;i++){
        cin>>arr[i];
        t-=arr[i];
        if(t<0 && i<n){
            t+=arr[start];
            start++;
        }
        if(t==0 || i==n-1) ending=i;
    }

    cout<<ending-start+1;
}
