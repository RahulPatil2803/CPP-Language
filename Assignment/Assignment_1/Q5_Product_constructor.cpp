#include<stdio.h>
#include<string.h>

struct Product {
	
		int id;
		char pName[20];
		double price;
		float quantity ;
	//Default Constructor
	Product(){
		printf("Default Constructor !\n");
		id=0;
		strcpy(pName,"Not Assigned");
		price=0;
		quantity=0;
	}
	// Parameterised Constructor 
	Product(int id ,char *pName,double price,float quantity){
		printf("Parameterised Constructor !\n");
		this->id=id;
		strcpy(this->pName,pName);
		this->price=price;
		this->quantity=quantity;
	}
	// Here setter
	void setId(int id){
		this->id=id;
	}
	void setName(char * pName){
		strcpy(this->pName,pName);
	}
	void setPrice(double price){
		this->price=price;
	}
	void setQuantity(double quantity){
		this->quantity=quantity;
	}
	// Here Display Function
	void display(){
		printf("\nId :%d",this->id);
		printf("\nProduct Name :%s",this->pName);
		printf("\nPrice :%f",this->price);
		printf("\nQuantity :%lf\n\n",this->quantity);
	}
};

int main(){
	Product p1;
	p1.display();

	Product p2(101,"Rahul",120.50,5.5);
	p2.display();
	return 0;
}