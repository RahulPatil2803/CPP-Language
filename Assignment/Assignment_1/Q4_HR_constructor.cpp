#include<stdio.h>
#include<string.h>
struct HR{
	int id;
	char name[20];
	float salary;
	double commission;

	HR(){               // here default constructor
		printf("\nIm in Default Constructor !\n");
		id=0;
		strcpy(name,"Rahul");
		salary=50;
		commission=50;
	}
	HR(int id,char *name ,float salary,double commission){     //here paramertrized constructor
	    printf("\nIm in Parametrised Constructor !\n");
		this->id=id;
		strcpy(this->name,name);
		this->salary=salary;
		this->commission=commission;
	}

	void setId(int id){    // here starting of setter 
		this->id=id;
	}
	void setName(char *name ){
		strcpy(this->name,name);
	}
	void setSalary(float salary){
		this->salary=salary;
	}
	void setCommission(double commision){
		this->commission=commission;
	}

	void display(){     // display function
		printf("\nId :%d",this->id);
		printf("\nName :%s",this->name);
		printf("\nSalary :%f",this->salary);
		printf("\nCommision :%lf\n",this->commission);
	}
	void add(){     // addition function 
	 int C=this->salary + this->commission;
		printf("Addition is :%d",C);
	}
};
int main(){
	HR h1;
	h1.display();
	h1.add();

	HR h2;
	h2.setId(2);
	h2.setName("Riya");
	h2.setSalary(50.34);
	h2.setCommission(150.30);
	h2.display();
	h2.add();

	HR h3;
	h3.display();
	h3.add();

	return 0;
}