/*
4. Write  more code to show inheritance on your own
*/
#include<iostream>
#include<string.h>
using namespace std;

class Person{
	public:
	// Attribute
	char Name[10];
	int age;
	// Method
	//1. Default Constructor 
	Person(){
		strcpy(this->Name,"Not Null");
		this->age=0;
	}
	//2.Parameter Constructor
	Person(const char* Name,int age){
		strcpy(this->Name,Name);
		this->age=age;
	}
	//3.Display Information
	virtual void display(){
		printf("\nName :%s",this->Name);
		printf("\nAge :%d\n",this->age);
	}
};

class Student :public Person{
	public:
	//Attribute
	int roll;
	double marks;
	//Method
	//1.Default
	Student(){
		this->roll=0;
		this->marks=0;
	}
	//2.Parameter
	Student(const char* Name,int age,int roll,double marks):Person(Name,age){
		this->roll=roll;
		this->marks=marks;
	}
	//3.Display 
	void display(){
		printf("\nRoll Id:%d",this->roll);
		printf("\nMarks :%lf",this->marks);
		Person::display();
	}
};

int main(){
	Person p1("Rahul",25);
	p1.display();

	Student s1("Rahul",25,1,89.44);
	s1.display();
}