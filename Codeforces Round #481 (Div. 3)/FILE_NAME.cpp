/*
You can not just take the file and send it. When Polycarp trying to send a file in the social network "Codehorses", he encountered an unexpected problem. If the name of the file contains three or more "x" (lowercase Latin letters "x") in a row, the system considers that the file content does not correspond to the social network topic. In this case, the file is not sent and an error message is displayed.

Determine the minimum number of characters to remove from the file name so after that the name does not contain "xxx" as a substring. Print 0 if the file name does not initially contain a forbidden substring "xxx".

You can delete characters in arbitrary positions (not necessarily consecutive). If you delete a character, then the length of a string is reduced by 1. For example, if you delete the character in the position 2 from the string "exxxii", then the resulting string is "exxii".

Input
The first line contains integer n (3≤n≤100) — the length of the file name.

The second line contains a string of length n consisting of lowercase Latin letters only — the file name.

Output
Print the minimum number of characters to remove from the file name so after that the name does not contain "xxx" as a substring. If initially the file name dost not contain a forbidden substring "xxx", print 0.
*/


#include<iostream>
using namespace std;
int solve(string s)
{
    int ans = 0;
    if(s.size()<=2)
    {
        return 0;
    }
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i]==s[i+1] && s[i]== s[i+2] && s[i]=='x')
        {
            ans++;
        }
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    cout<<solve(s);
}
