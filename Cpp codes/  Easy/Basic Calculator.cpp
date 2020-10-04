#include<iostream>
using namespace std;
int main() {
char ch;
int n1,n2,flag=0;
do
{   
	cin>>ch;
	switch(ch)
	{
		case '+':
		{
			cin>>n1>>n2;
			cout<<n1+n2;
			break;
		}
			case '-':
		{
			cin>>n1>>n2;
			cout<<n1-n2;
			break;
		}
			case '*':
		{
			cin>>n1>>n2;
			cout<<n1*n2;
			break;
		}
				case '/':
		{
			cin>>n1>>n2;
			cout<<n1/n2;
			break;
		}
	case '%':
		{
			cin>>n1>>n2;
			cout<<n1%n2;
			break;
		}
	case 'X':
	case 'x':	
	{
flag=-1;
		break;
	}
	default:
	{
		cout<<"Invalid operation. Try again.";

	}
	
	}
		cout<<endl;
}while(flag==0);

return 0;
}
