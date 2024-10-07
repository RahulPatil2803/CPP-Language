#include<stdio.h>
#include<string.h>

struct Date
{
	int date;
	int month;
	int year;

	Date(){
		printf("\nDefault Constructor !");
		this->date=0;
		this->month=0;
		this->year=0;
	}
	Date(int date,int month,int year ){
		printf("\nParameterised Constructor !");
		this->date=date;
		this->month=month;
		this->year=year;
	}
	//setter 
	void setDate(int date){
		this->date=date;
	}
	void setMonth(int month){
		this->month=month;
	}
	void setYear(int year){
		this->year=year;
	}
	//void Display 
	void display(){
		printf("\nOutput : %d/%d/%d",this->date,this->month,this->year);
	}
};

int main(){
	Date d1,d2(13,04,2003),d3;
	d1.display();

	d2.display();

	d3.display();

return 0;
}
