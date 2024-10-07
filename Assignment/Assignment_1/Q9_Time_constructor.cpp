#include<stdio.h>
#include<string.h>

struct Time{
	int hr;
	int min;
	int sec;

	Time(){
		printf("\nDefault Constructor !");
		this->hr=0;
		this->min=0;
		this->sec=0;
	}
	Time(int hr,int min,int sec ){
		printf("\nParameterised Constructor !");
		this->hr=hr;
		this->min=min;
		this->sec=sec;
	}
	//setter 
	void setDate(int hr){
		this->hr=hr;
	}
	void setMonth(int min){
		this->min=min;
	}
	void setYear(int sec){
		this->sec=sec;
	}
	//void Display 
	void display(){
		printf("\nOutput : %d:%d:%d",this->hr,this->min,this->sec);
	}
};

int main(){
	Time d1,d2(13,04,12),d3;
	d1.display();

	d2.display();

	d3.display();

return 0;
}
