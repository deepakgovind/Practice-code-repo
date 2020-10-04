
//Check if given two strings are anagram of each other.
//Anagram of a string is another string containing the same characters.
//Eg- 'asdf' and 'sdaf' are anagram of each other.

#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s1,string s2)
{
    int l1=s1.length();
    int l2=s2.length();

    if(l1!=l2)
        return false;
    sort(s1.begin(), s2.end());
    sort(s2.begin(), s2.end());

    for(int i=0;i<l1;i++)
        if(s1[i]!=s2[i])
            return false;
    return true;
}
int main() {
	// your code goes here
	string s1,s2;
	cin>>s1>>s2;
	if(isAnagram(s1,s2))
	    cout<<"They are anagram of each other.";
	else
	    cout<<"They are not anagram of each other.";
	return 0;
}