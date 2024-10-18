/*
Write a function to approve the loan for student based on there percentage and for 
employee based on there annual salary.

" Condition for student ":->
Above 80: 2 lakh
Between 60-80: 1 lakh
Between 40-50: 50 k
Below 40: no loan approved

" Condition for employee ":->
Above 12 LPA: 7 lakh
Between 10-12 lpa: 6 lakh
Between 6-10 lpa: 5 lakh
Between 4-6 lpa: 4 lakh
Below 4 lpa: no loan approved
*/
#include<iostream>
#include<string.h>
using namespace std;

class Student{
public:
	int roll;
	string name;
	int marks;
	// Student Section :-->
	Student(){
		this->roll;
		this->name="Null";
		this->marks=0;
	}

	Student(int roll,string name,int marks){
		this->roll=roll;
		this->name=name;
		this->marks=marks;
	}
	// Setter for Student :
	void setRoll(int roll){
		this->roll=roll;
	}
	void setName(string name){
		this->name=name;
	}
	void setMarks(int marks){
		this->marks=marks;
	}
	// Getters for Student :-->
	int getRoll(){
		return this->roll;
	}
	string getName(){
		return this->name;
	}
	int getMarks(){
		return this->marks;
	}
};

class Employee{
	public:
	int empId;
	string empName;
	int empSalary;

	Employee(){
		this->empId=0;
		this->empName="Null";
		this->empSalary=0;
	}
	Employee(int empId,string empName,int empSalary){
		this->empId=empId;
		this->empName=empName;
		this->empSalary=empSalary;
	}
	// Setter for Emp :-->
	void setId(int empId){
		this->empId=empId;
	}
	void setName(string empName){
		this->empName=empName;
	}
	void setSalary(int empSalary){
		this->empSalary=empSalary;
	}
	// Getter for Emp :-->
	int getId(){
		return this->empId;
	}
	string getName(){
		return this->empName;
	}
	int getSalary(){
		return this->empSalary;
	}
};
int main(){
	int ch;
	printf("Enter choice :\n1.Student\n2.Employee :");
	scanf("%d",&ch);

	switch(ch){
		case 1:
		{
			int std_roll_no;
			string std_name;
			int std_marks;
			printf("Enter Roll no :");
			scanf("%d",&std_roll_no);
			printf("Enter Name :");
			scanf("%s",&std_name);
			printf("Enter marks :");
			scanf("%d",&std_marks);

			Student s1;
			s1.setRoll(std_roll_no);
			s1.setName(std_name);
			s1.setMarks(std_marks);

			if(s1.getMarks()>=80){
				cout<<"Hello"<<std_name<<"your 2 lakh $ Loan is Approved ";
			}
			else if(s1.getMarks()>=60||s1.getMarks()<80){
				cout<<"Hello "<<std_name<<" your 1 lakh $ Loan is Approved";
			}
			else if(s1.getMarks()>=40||s1.getMarks()<50){
				cout<<"Hello "<<std_name<<" your 50 k $ Loan is Approved";
			}
			else{
				cout<<"Hello "<<std_name<<" your Loan is Not Approved, You got only "<<std_marks<<" !";
			}
		}
		case 2:
		{
			int emp_ID;
			string emp_name;
			int emp_salary;

			printf("Enter Employee ID :");
			scanf("%d",&emp_ID);
			printf("Enter Name :");
			scanf("%s",&emp_name);
			printf("Enter Salary :");
			scanf("%d",&emp_salary);
			Employee e1;
			e1.setId(emp_ID);
			e1.setName(emp_name);
			e1.setSalary(emp_salary);
			if(e1.getSalary()>1200000){
				cout<<"7 lakh "; 
			}
			else if(e1.getSalary()>=1000000 && e1.getSalary()<=1200000){
				cout<<"6 lakh Approved";
			}
			else if(e1.getSalary()>=600000 && e1.getSalary()<=1000000){
				cout<<"5 Lakh Approved";
			}
			else if(e1.getSalary()>=400000 && e1.getSalary()<=600000){
				cout<<"4 Lakh Approved";
			}
			else 
			{
				cout<<"No loan Approved";
			}
		}
	}
	return 0;
}