/*
A. Word Capitalization
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Capitalization is writing a word with its first letter as a capital letter. Your task is to capitalize the given word.

Note, that during capitalization all the letters except the first one remains unchanged.

Input
A single line contains a non-empty word. This word consists of lowercase and uppercase English letters. The length of the word will not exceed 103.

Output
Output the given word after capitalization.

Examples
inputCopy
ApPLe
outputCopy
ApPLe
inputCopy
konjac
outputCopy
Konjac

*/
#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

int main() {
	string str;
	cin>>str;
    int  c = str[0];
    c = toupper(c);
    str[0] = c;
    cout<<str<<endl;
	return 0;
}
