#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct complex{
	int real,img;

	complex(){
		real=10;
		img=20;
		printf("\nDefault Constructor Called ");
	}
