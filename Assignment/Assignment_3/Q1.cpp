/*
1. Write a operator overloading code to overload all the arithmetic operators to 
add 2 complex no, 1 complex no and int value and one non member function to 
add int and complex no.
*/

#include<iostream>
using namespace std;

class Complex{
public :
	int real ,img;
	Complex(){
		this->real=0;
		this->img=0;
	}
	Complex(int real,int img){
		this->real=real;
		this->img=img;
	}

	// Addition
	Complex operator+(Complex c){
		cout<<"Addition of Complex & Complex :\n";
		Complex temp;
		temp.real=c.real+this->real;
		temp.img=c.img+this->img;
		return temp;
	}
	Complex operator+(int a){
		cout<<"Addition of Complex & Int :\n";
		Complex temp;
		temp.real=this->real+a;
		temp.img=this->img+a;
		return temp;
	}

	// Subtraction 
	Complex operator-(Complex c){
		cout<<"Subtraction of Complex & Complex :\n";
		Complex temp;
		temp.real=c.real-this->real;
		temp.img=c.img-this->img;
		return temp;
	}
	Complex operator-(int a){
		cout<<"Subtraction of Complex & Int :\n";
		Complex temp;
		temp.real=this->real-a;
		temp.img=this->img-a;
		return temp;
	}
    void displayAdd() {
		printf("%d+%di\n\n",this->real,this->img);
	}
	void displaySub(){
		printf("%d+%di\n\n",this->real,this->img);
	}
};
int main(){
	Complex c1(10,20),c2(30,40);

	//Addition
	Complex c3=c1+c2;
	c3.displayAdd();
	Complex c4=c2+10;
	c4.displayAdd();
	//Subtraction
	Complex c5=c1-c2;
	c5.displaySub();
	Complex c6=c1-10;
	c6.displaySub();
	return 0;
}