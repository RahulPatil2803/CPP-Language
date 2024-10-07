#include<stdio.h>
#include<string.h>

class Animal{
	public:
	virtual void sound(){
		printf("Animal Sound\n");
	}
}; 
class Cat:public Animal{

 	

 		void sound() {
 			printf("cat is meowing\n");
	}
};
class Dog:public Animal{
 	
 		void sound() {
 			printf("Dog is barking\n");
 		}
};
class Tiger:public Animal {

	

		void sound() {
			printf("Tiger is growling\n");
		}
};


int main(){
	Animal *m[4];
    m[0]=new Cat;
	m[1]=new Dog;
	m[2]=new Tiger;

	for(int i=0;i<=2;i++){
		m[i]->sound();
	}

	return 0;
}
