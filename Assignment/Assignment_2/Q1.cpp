/*
1. Write a functions to add 2 int value, 2 float value, 1 int and 1 float value and vice 
versa . similary write functions for all other arithmetic operations.

*/
#include<iostream>
using namespace std;

class Calculator{
	public:
	// Addition -->
	int add(int a,int b){
		return a+b;
	}
	float add(int a,float b){
		return a+b;
	}
	float add(float a,int b){
		return a+b;
	}
	float add(float a,float b){
		return a+b;
	}

	// Subtrcation -->
	int sub(int a,int b){
		return a-b;
	}
	float sub(int a,float b){
		return a-b;
	}
	float sub(float a,int b){
		return a-b;
	}
	float sub(float a,float b){
		return a-b;
	}

	// Multiplicatio  -->
	int mult(int a,int b){
		return a*b;
	}
	float mult(int a,float b){
		return a*b;
	}
	float mult(float a,int b){
		return a*b;
	}
	float mult(float a,float b){
		return a*b;
	}

	// Division -->
	int div(int a,int b){
		return a/b;
	}
	float div(int a,float b){
		return a/b;
	}
	float div(float a,int b){
		return a/b;
	}
	float div(float a,float b){
		return a/b;
	}
};

int main(){
	Calculator cal;
	int a=10,b=20;
	float c=10.5,d=20.5;

	// Addition 
	cout<<"Addition :\n";
	cout<<"\nAnswer is :"<<cal.add(a,b);
	cout<<"\nAnswer is :"<<cal.add(a,c);
	cout<<"\nAnswer is :"<<cal.add(d,b);
	cout<<"\nAnswer is :"<<cal.add(c,d);

	//Subtraction 
	cout<<"\nSubtraction :\n";
	cout<<"\nAnswer is :"<<cal.sub(a,b);
	cout<<"\nAnswer is :"<<cal.sub(a,c);
	cout<<"\nAnswer is :"<<cal.sub(d,b);
	cout<<"\nAnswer is :"<<cal.sub(c,d);

	// Multiplication 
	cout<<"\nMultiplication :\n";
	cout<<"\nAnswer is :"<<cal.mult(a,b);
	cout<<"\nAnswer is :"<<cal.mult(a,c);
	cout<<"\nAnswer is :"<<cal.mult(d,b);
	cout<<"\nAnswer is :"<<cal.mult(c,d);

	//Division
	cout<<"\nDivision :\n";
	cout<<"\nAnswer is :"<<cal.div(a,b);
	cout<<"\nAnswer is :"<<cal.div(a,c);
	cout<<"\nAnswer is :"<<cal.div(d,b);
	cout<<"\nAnswer is :"<<cal.div(c,d);
}