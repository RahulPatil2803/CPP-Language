#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct complex{
	int real,img;

	complex(){
		real=10;
		img=20;
		printf("\nDefault Constructor Called ");
	}

	complex(int real,int img)
	{
		this->real=real;
		this->img=img;
		printf("\nParametrised Constructor Called ");
	}

	void setReal(int real){
		this->real=real;
	}
	void setImg(int img){
		this->img=img;
	}

	void display(){
		printf("\n%d + %di",this->real,this->img);
	}
}complex;

int main(){
	complex c1;
	c1.display();
	
	complex c2(20,30);
	c2.display();

    complex c3;
    c3.setReal(11);
	c3.setImg(14);

    c3.display();

}