#include<stdio.h>
#include<iostream>
#include<string.h>

class Animal{
	public :
	virtual void Sound(){
		printf("Animal Sound\n");
	}
}; 
class Cat:public Animal{
	public:
	void sound(){
		printf("Cat sound\n");
	}
};
class Dog:public Animal{
	public:
	void sound(){