#include<stdio.h>
#include<string.h>

struct Add{
	Add(){

	}
	int add(int a,int b){
		int res=a+b;
		printf("Im in int int block\nSum is :%d",res);
	}
	float add(int a,float b){
		float res=a+b;
		printf("Im in int float block\nSum is :%f",res);
	}
	float add(float a,int b){
		float res=a+b;
		printf("Im in float int block\nSum is :%f",res);
	}
	float add(float a,float b){
		float res=a+b;
		printf("Im in float block\nSum is :%f",res);
	}
};

int main(){
	int a=12; float b=12.50;
	Add a1;
//	a1.add(12,12.50);
	a1.add(a,b);

	return 0;
}