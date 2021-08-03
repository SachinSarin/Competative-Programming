/*
The translation from the Berland language into the Birland language is not an easy task. Those languages are very similar: a berlandish word differs from a birlandish word with the same meaning a little: it is spelled (and pronounced) reversely. For example, a Berlandish word code corresponds to a Birlandish word edoc. However, it's easy to make a mistake during the «translation». Vasya translated word s from Berlandish into Birlandish as t. Help him: find out if he translated the word correctly.

Input
The first line contains word s, the second line contains word t. The words consist of lowercase Latin letters. The input data do not consist unnecessary spaces. The words are not empty and their lengths do not exceed 100 symbols.

Output
If the word t is a word s, written reversely, print YES, otherwise print NO.

Examples
inputCopy
code
edoc
outputCopy
YES
inputCopy
abb
aba
outputCopy
NO
inputCopy
code
code
outputCopy
NO

*/
#include <iostream>
using namespace std;

int main() {
	string s1;
	string s2;
	cin>>s1>>s2;
	int n = s1.size();
	bool isflag = true;
	for(int i = 0; i < n; i++)
	{
	    if(s1[i]!=s2[n-i-1])
	    {
	        isflag = false;
	        break;
	    }
	}
	if(isflag)
	{
	    cout<<"YES"<<endl;
	}
	else
	{
	    cout<<"NO"<<endl;
	}
	return 0;
}
