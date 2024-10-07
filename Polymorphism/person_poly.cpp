#include<stdio.h>
#include<string.h>

class Person{
	char name[10];
	int age;
	char address[20];

	public :
	Person(){
		strcpy(this->name,"Not Assigned");
		this->age=0;
		strcpy(this->address,"Not Agginged");
	}
	Person(char* name,int age,char *address){
		strcpy(this->name,name);
		this->age=age;
		strcpy(this->address,address);
	}	
	virtual void display(){
		printf("\nName :%s",this->name);
		printf("\nAge :%d",this->age);
		printf("\nAddress :%s",this->address);
	}
};

class Student:public Person{
	int stdId;
	public:
	Student(){
		this->stdId=0;
	}
	Student(int stdId,char *name,int age, char *address):Person(name,age,address){
		this->stdId=stdId;
	}
	void display(){
		Person::display();
		printf("\nStudent Id :%d\n\n",this->stdId);
	}
};

class Teacher:public Person{
	int teacherId;
	double salary;
	public:
	Teacher(){
		this->teacherId=0;
		this->salary=0;
	}
	Teacher(int teacherId,int salary,char *name,int age,char *addres):Person(name,age,addres){
		this->teacherId=teacherId;
		this->salary=salary;
	}
	void display(){
		Person::display();
		printf("\nTeacher Id :%d",this->teacherId);
		printf("\nSalary :%lf\n\n",this->salary);
	}
};

int main(){
	Person *p=new Student(101,"Rahul",21,"Pune");
	p->display();

	Person *p3=new Teacher(1,12.500,"Patil",45,"Hadapsar Pune");
	p3->display();

	Person *p1=new Student();
	p1->display();


	return 0;
}