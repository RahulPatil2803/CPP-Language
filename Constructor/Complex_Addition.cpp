#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct complex{ // structure create kela 
	int real,img;

	complex(){    //Default Constructor
		real=10;
		img=20;
	}

	complex(int real,int img) // Parametrised Constructor
	{
		this->real=real;
		this->img=img;
	}

	void setReal(int real){    // ithe set Real 
		this->real=real;
	}
	void setImg(int img){     // ithe Set Img
		this->img=img;
	}

	void display(){    //here display function
		printf("\nReal :%d \n Img :%d\n",this->real,this->img);
	}

	complex add(complex c2){  // complex and complex chi addition ahe ithe 
		complex c3;
		c3.real=this->real+c2.real;
		c3.img= this->img+c2.img;
		return c3;
	}
		complex add(int a){   // complex and int chi adiition ithe ahe 
		complex c3;
		c3.real=this->real+a;
		c3.img= this->img+a;
		return c3;
	}
};
complex add(complex c1,int a){  // ithe global declarartion of add function
		complex c3;
		c3.real=c3.real+a;
		c3.img= c3.img+a;
		return c3;

}
	void display(complex c){    //ithe global declaration of display function
	printf("This is global :\n");
		printf("\nReal :%d \n Img :%d",c.real,c.img);
	}
int main(){
	complex c1(10,20);   // c1 function here 
	complex c2(5,5);   // c2 function here

	complex c3=c1.add(c2);   // ithe c1 and c2 chi addition keli ahe 
	c3.display();

	int a=10;    // integer ithe declare kela ahe 
	complex c4=c2.add(a);   // ithe addition c2 and integer 10 chi 
	c4.display();

	complex c5=c2.add(10);   // ithe global addition keli ahe c1 and 10n chi
	display(c5);
	
	
    return 0;
}