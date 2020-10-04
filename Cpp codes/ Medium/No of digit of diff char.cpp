#include<iostream>
using namespace std;
int main()
{
 int digit=0,alphabet=0,spaces=0,others=0;
 char ch;
 ch=cin.get();//for getting the spaces and new line characters
 while(ch!='$')
 {
 	if(ch>='0' and ch<='9')
 	{
 		digit++;
	 }
	 else if((ch>='a' and ch<='z') or (ch>='A' and ch<='z'))
	 {
	 	alphabet++;
	 }
	 else if(ch=='\n' or ch==' ' or ch=='\t')
	 {
	 	spaces++;
	 }
	 else
	 {
	 	others++;
	 }
	 ch=cin.get();
 }
 cout<<"Digits : "<<digit<<endl<<"Alphabets : "<<alphabet<<endl<<"Spaces : "<<spaces<<endl<<"Others : "<<others<<endl;
 return 0;
}
