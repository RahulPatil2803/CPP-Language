#include<stdio.h>
#include<string.h>

struct Time{
	int hours ,min,sec;

	Time(){
		printf("\nDefalut Call");
		hours=0;
		min=0;
		sec=0;
	}
	Time(int hours,int min,int sec){
		printf("\nParameterized Constructor");
		this->hours=hours;
		this->min=min;
		this->sec;
	}
	//Getter
	void setHr(int hours){
		this->hours=hours;
	}
		void setMin(int min){
		this->min=min;
	}
		void setSec(int sec){
		this->sec=sec;
	}
	//seter
	int getHr(){
		return this->hours;
	}
		int getMin(){
		return this->min;
	}
		int getSec(){
		return this->sec;
	}
};

int main(){
	Time t1;
	printf("\n%d,%d,%d",t1.getHr(),t1.getMin(),t1.getSec());

	Time t2(2,45,60);
	printf("\n%d,%d,%d",t2.getHr(),t2.getMin(),t2.getSec());
}