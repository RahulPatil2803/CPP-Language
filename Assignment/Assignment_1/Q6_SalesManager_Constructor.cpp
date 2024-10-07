#include<stdio.h>
#include<string.h>

struct salesManager {
	
		int id;
		char pName[20];
		double salary;
		float allowance;
	//Default Constructor
	salesManager(){
		printf("Default Constructor !");
		id=0;
		strcpy(pName,"Not Assigned");
		salary=0;
		allowance=0;
	}
	// Parameterised Constructor 
	salesManager(int id ,char *pName,double salary,float allowance){
		printf("Parameterised Constructor !");
		this->id=id;
		strcpy(this->pName,pName);
		this->salary=salary;
		this->allowance=allowance;
	}
	// Here setter
	void setId(int id){
		this->id=id;
	}
	void setName(char * pName){
		strcpy(this->pName,pName);
	}
	void setPrice(double salary){
		this->salary=salary;
	}
	void setQuantity(double allowance){
		this->allowance=allowance;
	}
	// Here Display Function
	void display(){
		printf("\nId :%d",this->id);
		printf("\nProduct Name :%s",this->pName);
		printf("\nSalary :%f",this->salary);
		printf("\nAllowance :%lf\n\n",this->allowance);
	}
};

int main(){
	salesManager s1;
	s1.display();

	salesManager s2(101,"Rahul",120.50,500.5);
	s2.display();
	return 0;
}