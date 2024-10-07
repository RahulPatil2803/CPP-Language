#include<stdio.h>
#include<string.h>

struct Student {
	
		int id;
		char pName[20];
		int marks;
	//Default Constructor
	Student(){
		printf("Default Constructor !");
		id=0;
		strcpy(pName,"Not Assigned");
		marks=0;
	}
	// Parameterised Constructor 
	Student(int id ,char *pName,int marks){
		printf("Parameterised Constructor !");
		this->id=id;
		strcpy(this->pName,pName);
		this->marks=marks;
	}
	// Here setter
	void setId(int id){
		this->id=id;
	}
	void setName(char * pName){
		strcpy(this->pName,pName);
	}
	void setMarks(int marks){
		this->marks=marks;
	}
	// Here Display Function
	void display(){
		printf("\nId :%d",this->id);
		printf("\nProduct Name :%s",this->pName);
		printf("\nMarks %d\n\n",this->marks);
	}
};

int main(){
	Student s1;
	s1.display();

	Student s2(101,"Rahul",90);
	s2.display();
	return 0;
}