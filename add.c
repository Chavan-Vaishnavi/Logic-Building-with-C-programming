#include<stdio.h>
 int add(int a, int b){

 	int c=a+b;
 	
	printf("Addition of a and b is:%d",c);
 }
 int  main(){
 	int p;
 	int q;
 	printf("Enter value of p:");
 	scanf("%d",&p);
 	printf("Enter value of q:");
 	scanf("%d",&q);
 	
 	add(p,q);
 }
