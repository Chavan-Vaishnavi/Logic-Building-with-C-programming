#include<stdio.h>

int main(){
	int h;
	int l;
	
	float area;
	
	printf("Enter height and length of rectangle:");
	scanf("%d%d",&h,&l);
	
	area=h*l;
	printf("Area of rectangle:%f",area);
}
