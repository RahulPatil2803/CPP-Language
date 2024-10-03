#include<stdio.h>
#include<iostream>
struct complex{
	int real,img;

	complex(){     // Here default constructor.
		real=10;
		img=20;
	}

	complex(int real,int img) // Here Parameter constructor.
	{
		this->real=real;
		this->img=img;
	}

	void setReal(int real){    // seter Real.
		this->real=real;
	}
	void setImg(int img){      // Getter Img.
		this->img=img;
	}

	void display(){     // Display Function 
		printf("\nReal :%d \nImg :%d",this->real,this->img);
	}

	complex operator++(){      // Pre Increment 
		complex c1;
		c1.real=++this->real;
		c1.img=++this->img;
		return c1;
	}

	complex operator++(int a){    // Poat Increment 
		complex c2;
		c2.real=this->real++;
		c2.img=this->img++;
		return c2;
	}
};
int main(){
	complex c1;

	complex c2=c1++;
	c2.display();      // Calling Post Increment .

	complex c3=++c2;
	c3.display();     // Calling Pre increment .
    return 0;
}
