/*
2. Implement an object-oriented system to showcase inheritance in a geometric shapes 
application. Begin by creating a base class Shape with a common attribute area. 
Include essential methods such as a constructor, a member function to calculate the 
area, and another member function to display the shape's information.
Derive three classes from the base class Shape: Triangle, Circle, and Rectangle. 
Each derived class should have its own set of attributes (height and base for 
Triangle, radius for Circle, length and width for Rectangle) and methods. The 
derived classes must inherit the area attribute and methods from the base class.
Shape Class (Base Class):
Attributes:
area: Area of the shape
Methods:
Constructor: Initializes the attributes.
CalculateArea: Calculates and sets the area based on the shape.
Display: Displays the shape's information, including the calculated area.
Triangle Class (Derived from Shape):-->
Additional Attributes:
height: Height of the triangle
base: Base of the triangle
Additional Methods:-->
Constructor: Initializes the attributes.
CalculateArea: method to calculate the area of the triangle.
Display: Overrides the base class method to display triangle-specific information.
Circle Class (Derived from Shape):-->
Additional Attributes:
radius: Radius of the circle
Additional Methods:-->
Constructor: Initializes the attributes.
CalculateArea: method to calculate the area of the circle.
Display: Overrides the base class method to display circle-specific information.
Rectangle Class (Derived from Shape):
Additional Attributes:-->
length: Length of the rectangle
width: Width of the rectangle
Additional Methods:-->
Constructor: Initializes the attributes.
CalculateArea: method to calculate the area of the rectangle.
Display: Overrides the base class method to display rectangle-specific information.
*/

#include<iostream>
using namespace std;

class Shape{
	public :
	// Attribute :-->
	double area;
	//Method :-->
	// 1.Default Constructor
	Shape(){
		this->area=0;
	}
	// 2.Parameter constructor
	Shape(double area){
		this->area=area;
	}
	// 3.calculate area 
	virtual double calArea(){
		return this->area;
	}
	// 4.Display Area 
	virtual void display(){
		printf("\nArea :%lf",this->area);
	}
};
class Triangle:public Shape{
	public:
	int height;
	int base;
	//Method :
	//1. Default Constructor 
	Triangle(){
		this->height=0;
		this->base=0;
	}
	// 2. Parameter Constructor
	Triangle(int height ,int base){
		this->height=height;
		this->base=base;
	}
	virtual double calArea(){
		 this->area=(0.5*this->base*this->height);
		return area;
	}
	virtual void display(){
		printf("\nArea of Triangle :%lf",this->area);
	}
};
class Circle:public Shape{
	public:
	//Additional Attributes 
	int radius;
	// Methods
	//1.Default Constructor 
	Circle(){
		this->radius=0;
	}
	//2. Parameter Constructor
	Circle(int radius){
		this->radius=radius;
	}
	//3.Calculate area
	virtual double calArea(){
		this->area=(3.14*this->radius*this->radius);
		return area;
	}
	virtual void display(){
		printf("\nArea of Circle %lf",this->area);
	}
};

class Rectangle:public Shape{
	public:
	//Additional Attributes 
	int len;
	int bre;
	//Method 
	// 1. default Constructor 
	Rectangle(){
		this->len=0;
		this->bre=0;
	}
	Rectangle(int len,int bre){
		this->len=len;
		this->bre=bre;
	}
	//3.Calculate area
	virtual double calArea(){
		this->area=this->len*this->bre;
		return area;
	}
	//4.Display 
	virtual void display(){
		printf("\nArea of Rectangle :%lf",this->area);
	}
};

int main(){
	Shape s1;
	s1.calArea();
	s1.display();

	Triangle t1(15,20);
	t1.calArea();
	t1.display();

	Circle c1(50);
	c1.calArea();
	c1.display();

	Rectangle r1(20,30);
	r1.calArea();
	r1.display();
return 0;
}