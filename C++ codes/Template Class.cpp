#include<iostream>
using namespace std;
template<class T>
class Arithmetic
{
	private:
		T a;
		T b;
	public:
		Arithmetic(T a,T b);
		T add();
		T subtract();
};

template<class T>
Arithmetic <T>:: Arithmetic(T a,T b)
{
	this->a=a;
	this->b=b;
}
template<class T>
T Arithmetic <T>::add()
{
	T c;
	c= a+b;
	return c;
}
template<class T>
T Arithmetic <T>::subtract()
{
	T c;
	c= a-b;
	return c;
}
int main()
{
	Arithmetic<int> a(10,5);
	cout<<a.add()<<" "<<a.subtract()<<endl;
	Arithmetic<float> b(10.2,5.3);
	cout<<b.add()<<" "<<b.subtract()<<endl;
	return 0;
}





