#include<iostream>
using namespace std; 
  

class parent 
{ 
    public: 
    int ParentNumber; 
}; 
   

class child : public Parent 
{ 
    public: 
    int ChildNumber ;
}; 
  

int main()  
   { 
       
        child.obj; 
           
       
        obj.ParentNumber = 20; 
        obj.ChildNumber = 45; 
        cout << "Child Number is " <<  obj.ChildNumber << endl; 
        cout << "Parent Number is " <<  obj1.ParentNumber << endl; 
          
        return 0; 
   }  
