/*
2. Write a function to calculate area of shape, for calculating area of triangle, 
rectangle, circle differently.
*/

#include<string.h>
#include<conio.h>
#include<iostream>

using namespace std;

class Shape{
	public :
	int radius,length,breadth,height,base;
	float side;
	const int py=3.14;

	Shape(){
		this->radius=0;
		this->length=0;
		this->breadth=0;
		this->height=0;
		this->base=0;
		this->side=0;
	}

	// All shapes and their area .
	int calArea(int length,int breadth,int height){
		// Rectangle
		this->length=length;
		this->breadth=breadth;
		this->height=height;
		return (length*breadth*height);
	}
	float calArea(float side){
		// Square
		this->side=side;
		return (side*side);
	}
	float calArea(int radius){
		// Circle
		this->radius=radius;
		return (py*radius*radius);
	}
	float calArea(int height,int base){
		//Triangle 
		this->height=height;
		this->base=base;
		return (0.5*base*height);
	}
};

int main(){
	Shape s;
	int radius=10,length=15,breadth=15,height=30,base=30;
	float side=40.5;

	cout<<"\nArea of Square :"<<s.calArea(side);
	cout<<"\nArea of Circle :"<<s.calArea(radius);
	cout<<"\nArea of Circle :"<<s.calArea(height,base);
	return 0;
}