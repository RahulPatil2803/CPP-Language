#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Admin{    // here i create structure 
	int id;
	char name[20];
	float salary;
	double allowance;

	Admin(){   // default contructor and value assignment
	printf("\nIm in Default Constructor !");
		id=0;
		strcpy(name,"Not Assigned");
		salary=0;
		allowance=0;
	}
	Admin(int id,char *name,float salary,double allowance){ // Parameterized Constructor 
	printf("\n\nIm in Parameterised Constructor !");
		this->id=id;
		strcpy(this->name,name);
		this->salary=salary;
		this->allowance;
	}

	void setId(int id){       //here starting of Setter 
		this->id=id;
	}
	void setName(char *name){
		strcpy(this->name,name);
	}
	void setSalary(float salary){
		this->salary=salary;
	}
	void setAllowance(double allowance){
		this->allowance=allowance;
	}

	void display()  //here display funtion
	{
		printf("\nId :%d",this->id);
		printf("\nName :%s",this->name);
		printf("\nSalary :%lf",this->salary);
		printf("\nAllowance :%f",this->allowance);
	}

};
int main(){
	Admin a1;   // object create and it will treat as default .
	a1.display();

	Admin a2;  // object created and we send parameter to contructor .
	a2.setId(1);
	a2.setName("Rahul");
	a2.setSalary(100);
	a2.setAllowance(1200);
	a2.display();

	Admin a3;   // object create and it will treat as default .
	a3.display();

	return 0;
}