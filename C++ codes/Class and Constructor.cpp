#include<iostream>
using namespace std;
class Rectangle
{
	//access specifier
	private: 
	//data members
		int length; 
		int breath;
	
	public:
		//member function
		
		Rectangle() //default constructor
		{
			length=breath=1;
		}
		Rectangle(int l,int b); // parameterized constructor (overloaded)
		//facilitator- it does operation on the data member.
		int area();
		int perimeter();
		//getter - accessor
		int get_length()
		{
			return length;
		}
	    //setter - mutator
	    void set_length(int l)
	    {
	     length==l;  
		}
		//~Rectangle(); //destructor
};
//Implementation of few function.
  Rectangle::Rectangle(int l,int b) //Should be implemented with scope resolution operator
  {
  	length=l;
  	breath=b;
  }
  int Rectangle::area()
  {
  	return length*breath;
  }
  int Rectangle::perimeter()
  {
  	return 2*(length+breath);
  }
  
  //main function
  
  int main()
  {
  	Rectangle r(10,20);//creation of object. Constructor get initalized. and it's variable too.
    cout<<r.area()<<endl;//calling member function with object.
	cout<<r.perimeter();
	return 0;	
  	
  }


