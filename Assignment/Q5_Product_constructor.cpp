#include<stdio.h>
#include<string.h>

struct Product {
	
		int id;
		char pName[20];
		double price;
		float quantity ;
	
	Product(){
		id=0;
		strcpy(pName,"Not Assigned");
		price=0;
		quantity=0;
	}
};