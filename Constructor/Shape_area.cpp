#include<stdio.h>
#include<string.h>

struct Area{
	int len;
	int bredth;
	int height;
	float radius;
	int side;
	float area;
	Area(){
		//Default 
	}
// // Setter  :-
// 	void setLen(int len){
// 		this->len=len;
// 	}
// 	void setBreadth(int bredth){
// 		this->bredth=bredth;
// 	}
// 	void setHeight(int height){
// 		this->height=height;
// 	}
// 	void setRadius(float radius){
// 		this->radius=radius;
// 	}
// 	void setSide(int side){
// 		this->side=side;
// 	}
// // Getter  :-
//     int getLen(){
// 		return this->len;
// 	}
// 	int getBreadth(){
// 		return this->bredth;
// 	}
// 	int getHeight(){
// 		return this->height;
// 	}
// 	float getRadius(){
// 		return this->radius;
// 	}
// 	int getSide(){
// 		return this->side;
// 	}
// Main Code :-
	int calArea(int len,int bredth){
		printf("Rectangle :\n");
		int area=(this->len)*(this->bredth);
		return area;
	}
	int calArea(int side){
		printf("Square :\n");
		int area=(this->side)*(this->side);
		return area;
	}
	float calArea(float radius){
		printf("Circle :\n");
		int area=(this->radius)*(this->radius)*3.14;
		return area;
	}
void display(){
	printf("Area is :%f",this->area);
}
};

int main(){
	Area a1;
	float a=10.2;
	a1.calArea(a);
	a1.display();
	return 0;
}