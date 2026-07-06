#include<stdio.h>
int circle(){
	int r;
	float p=3.14;
	float area;
	
	printf("Enter radius:");
	scanf("%d",&r);
	area=p*r*r;
	printf("Area of circle:%f\n",area);
}
int rectangle(){
	int h;
	int l;
	float area;
	
	printf("Enter height  and length of rectangle:");
	scanf("%d%d",&h,&l);
	area=h*l;
	printf("Area of rectangle:%f",area);
}
int main(){
	circle();
	rectangle();
}
