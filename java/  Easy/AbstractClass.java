//Abstract Class Illustration
//An abstract class is a class that cannot be instantiated (we cannot create objects of an abstract class). In Java, we use the abstract keyword to declare an abstract class.
abstract class Shape
{
	Shape()
	{
		System.out.println("Shape constructor called");
	}

	public abstract double area(int a);
	public abstract double area(int a, int b);
}
//An abstract class cannot be instantiated. To access the members of an abstract class, we must inherit it. For example
class Rectangle extends Shape
{
	public double area(int a, int b)
	{
		int area = a*b;
		System.out.println("The area of the rectangle is: " + area);
	}
}

class Square extends Shape
{
	public double area(int a)
	{
		int area = a*a;
		System.out.println("The area of the sqaure is: " + area);
	}
}

public class AbstractClass
{
	public static void main(String[] args) 
	{
		Square obj1 = new Square();
		obj1.area(5);
		Rectangle obj2 = new Rectangle();
		obj2.area(5,10);	
	}
}
//Why Java Abstraction?
/*Abstraction is an important concept of object-oriented programming. Abstraction only shows the needed information and all the unnecessary details are kept hidden. This allows us to manage complexity by omitting or hiding details with a simpler, higher-level idea.

A practical example of abstraction can be motorbike brakes. We know what brake does. When we apply the brake, the motorbike will stop. However, the working of the brake is kept hidden from us.

The major advantage of hiding the working of the brake is that now the manufacturer can implement brake differently for different motorbikes, however, what brake does will be the same.*/