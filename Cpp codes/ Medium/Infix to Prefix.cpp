#include<bits/stdc++.h>
using namespace std;
int priority(char c)
{
    if(c=='*' || c=='/')
        return 1;
    else if(c=='+' || c=='-')
        return 2;
}
bool isOperator(char c)
{
    if(c == '+' || c=='-' || c=='*' || c=='/')
        return true ;
    else
        return false ;
}
string infix_to_postfix(string s)
{
    s = "("+s+")" ;
    stack<char> st ;
    string ans = "" ;
    for(int i=0;i<s.size();i++)
    {
        if(s[i] == '(')
            st.push(s[i]) ;
        else if(!isOperator(s[i]) && s[i] != ')')
        {
            string x(1,s[i]);
            ans+=x;
        }
        else if(isOperator(s[i]))
        {
            char x = st.top() ;
            if(isOperator(x))
            {
                if(priority(x)<priority(s[i]))
                {
                    string ch(1,x);
                    ans+=ch ;
                    st.pop() ;
                    st.push(s[i]);
                }
                else
                {
                    st.push(s[i]);
                }
            }
            else
                st.push(s[i]);
        }
        else if(s[i] == ')')
        {
            while(st.top() != '(')
            {
                char x = st.top() ;
                string ch(1,x) ;
                ans+=ch ;
                st.pop() ;
            }
            st.pop() ;
        }
    }

    return ans ;
}
string reverse(string s)
{
    string ans = "" ;
    int i=0;
    for(i=s.size()-1;i>=0;i--)
    {
        string x(1,s[i]);
        ans+=x;
    }
    return ans ;
}
string infix_to_prefix(string s)
{
    s = reverse(s) ;
    for(int i=0;i<s.size();i++)
    {
        if(s[i] == ')')
            s[i] = '(';
        else if(s[i] == '(')
            s[i] = ')';
    }
    s = infix_to_postfix(s) ;
    s = reverse(s) ;
    for(int i=0;i<s.size();i++)
    {
        if(s[i] == ')')
            s[i] = '(';
        else if(s[i] == '(')
            s[i] = ')';
    }
    return s ;
}
int main()
{
    string s ;
    cout<<"Enter the In-Fix Expression : " ;
    cin>>s ;
    string ans = infix_to_prefix(s) ;
    cout<<endl<<"Required Pref-Fix Expression :- "<<ans ;
    return 0 ;
}
