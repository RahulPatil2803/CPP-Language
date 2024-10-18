/*
 Design a system for managing employee information using object-oriented 
principles, specifically focusing on inheritance. Implement a base class Employee 
with essential attributes such as eid (employee ID), ename (employee name), and 
salary. The Employee class should have a constructor, setter, getter, display, and a 
member function to calculate the salary based on the specific employee type.
Derive three classes from the base class: HR, SalesManager, and Admin. Each 
derived class should have its own set of attributes and methods, along with 
inheriting the attributes and methods from the base class.

Employee Class:-->
Attributes:
eid: Employee ID
ename: Employee Name
salary: Basic Salary
Methods:
Constructor: Initializes the attributes.
Setter: Sets values for attributes.
Getter: Retrieves values of attributes.
Display: Displays employee information.
CalculateSalary: Calculates and returns the salary.

HR Class (Derived from Employee):-->
Additional Attributes:
commission: Commission percentage
Additional Methods:
Constructor: Initializes the attributes.
Setter: Sets values for attributes.
Getter: Retrieves values of attributes.
Display: Displays HR-specific information.
CalculateSalary: method to calculate HR's total salary including commission.

SalesManager Class (Derived from Employee):-->
Additional Attributes:
target: Sales target
incentive: Incentive amount
Additional Methods:
Constructor: Initializes the attributes.
Setter: Sets values for attributes.
Getter: Retrieves values of attributes.
Display: Displays Sales Manager-specific information.
CalculateSalary: method to calculate Sales Manager's total salary including 
incentives.

Admin Class (Derived from Employee):-->
Additional Attributes:
allowance: Allowance amount
Additional Methods:
Constructor: Initializes the attributes.
Setter: Sets values for attributes.
Getter: Retrieves values of attributes.
Display: Displays Admin-specific information.
CalculateSalary: method to calculate Admin's total salary including allowances.

*/

#include<iostream>
#include<string.h>
using namespace std;
// *** Employe  ( Base class )***
class Employee{
	public :
// Attributes of Employee :
	int eId;
	char eName[30];
	double eSalary;
		Employee(){
		this->eId=0;
		strcpy(this->eName,"Null");
		this->eSalary=0;
	}
// Methods of Employee :
	//1. Parameterized Constructor
	Employee(int eId,const char* eName,double eSalary){
		this->eId=eId;
		strcpy(this->eName,eName);
		this->eSalary=eSalary;
	}
	// 2.Setter 
	void setId(int eId){
		this->eId=eId;
	}
	void setName(const char* eName){
		strcpy(this->eName,eName);
	}
	void setSalary(double eSalary){
		this->eSalary=eSalary;
	}
	// 3. Getter
	int getId(){
		return this->eId;
	}
	char* getName(){
		return this->eName;
	}
	double getSalary(){
		return this->eSalary;
	}
	// 4. Display Employee
	virtual void display(){
		printf("\nEmployee Id :%d",this->eId);
		printf("\nEmployee Name :%s",this->eName);
		printf("\nEmployee Salary :%lf",this->eSalary);
	}
	// 5. Calculate salary
	virtual double calSalary(){
		printf("\nBasic salary :%lf\n\n",this->eSalary);
	}
};
// *** HR  ***
class HR:public Employee{
	public :
	// Additional Attribute 
	double commision;
	// Additional Method
	// 1.Default Constructor
	HR(){
		this->commision=0;
	}
	// 2. Parameterized Constructor
	HR(int eId,const char* eName,double eSalary,double commision):Employee(eId,eName,eSalary){
		this->commision=commision;
	}
	// 3. Setters
	void setCommision(double commision){
		this->commision=commision;
	}
	// 4. Getters 
	double getCommision(){
		return this->commision;
	}
	// 5. Display Information
	virtual void display(){
		Employee::display();
		printf("\nCommision :%lf",this->commision);
	}
	virtual double calSalary(){
		printf("\nTotal Salary :%lf\n\n",this->eSalary+this->commision);
		return this->eSalary+this->commision;
	}
};

// *** Sales Manager ***
class SalesManager:public Employee{
	public :
	// Additional Attribute :
	double target;
	double insentive;
	// Additional Method :
	//1. Default Constructor
	SalesManager(){
		this->target=0;
		this->insentive=0;
	}
	// 2. Parametrized constructor 
	SalesManager(int eId,const char* eName,double eSalary,double target,double insentive):Employee(eId,eName,eSalary){
		this->target=target;
		this->insentive=insentive;
	}
	// 3.Setters 
	void setTarget(double target){
		this->target=target;
	}
	void setInsentive(double insentive){
		this->insentive=insentive;
	}
	//4.Getters 
	double getTarget(){
		return this->target; 
	}
	double getInsentive(){
		return this->insentive;
	}
	// 5.Display Information
	virtual void display(){
		Employee::display();
		printf("\nTarget :%lf",this->target);
		printf("\nInsentive :%lf",this->insentive);
	}
	// 6. Calculate Salary 
	virtual double calSalary(){
		printf("\nTotal Salary is :%lf\n\n",this->eSalary+this->insentive);
		return this->eSalary+this->insentive;
	}
};
// *** Admin ***
class Admin:public Employee{
	public:
	// Additional Attribute 
	double allowance;
	// Additional Method
	// 1. Default Constructor 
	Admin(){
		this->allowance=0;
	}
	// 2.Parameterized Constructor
	Admin(int eId,const char* eName,double eSalary,double allowance):Employee(eId,eName,eSalary){
		this->allowance=allowance;
	}
	// 3.Setters
	void setAllowance(double allowance){
		this->allowance=allowance;
	}
	// 4.Getters
	double getAllowance(){
		return this->allowance;
	}
	// 5.Display Info
	virtual void display(){
		Employee::display();
		printf("\nAllowance :%lf",this->allowance);
	}
	virtual double calSalary(){
		printf("\nTotal Salary :%lf\n\n",this->eSalary+this->allowance);
		return this->eSalary+this->allowance;
	}

};

int main(){
	// Creating Array of Employee to store all
	Employee e1(000,"No-User",00.000);
	e1.display();
	e1.calSalary();

	// Sales Manager
	SalesManager s1(1,"RAHUL",20000.500,20.0,100.0);
	s1.display();
	s1.calSalary();

	//HR 
	HR h1(2,"Devashree",20000.500,5000.00);
	h1.display();
	h1.calSalary();

	//Admin
	Admin a1(3,"Teju",20000.500,600.00);
	a1.display();
	a1.calSalary();

// p[0]=new SalesManager(101,"xyz",10000.0,153,1000); 
// p[1]=new HR(102,"abc",10000.0,2000);
// p[2]=new Admin(103,"pqr",10000,1200);


return 0;
}