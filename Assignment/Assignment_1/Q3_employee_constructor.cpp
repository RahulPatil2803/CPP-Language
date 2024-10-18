#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Employee{
	int id;
	char name[20];
	double salary ;

	Employee(){
		int id=0;
		strcpy(name,"not assigned ");
		salary=0;
		printf("\nThis is Default constructor !\n");
	}

	Employee(int id,char * name,double salary)
	{
		this->id=id;
		strcpy(this->name,name);
		this->salary=salary;
		printf("\nThis is Paramterised constructor !");
	}
	void setId(int id){
		this->id=id;
	}
	void setName(char *name){
		strcpy(this->name,name);
	}
	void setSalary(double salary){
		this->salary=salary;
	}
	void display()
	{
		printf("\nID is :%d\n",this->id);
		printf("Name is :%s\n",this->name);
		printf("Salary is :%lf\n",this->salary);
	}
};
int main(){
	Employee e1;
	e1.display();

	Employee e2(101,"Rahul",35000);
	e2.display();

	Employee e3;
	e3.setId(103);
	e3.setName("Devashree");
	e3.setSalary(12000);
	e3.display();
}

