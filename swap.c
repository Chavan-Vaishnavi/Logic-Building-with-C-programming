#include<stdio.h>
int main(){
	int n1;
	int n2;
	printf("Enter number1 and number2:");
	scanf("%d%d",&n1,&n2);
	
	printf("Befroe swapping number1 and number2 are:%d and %d",n1,n2);
	
	n1=n1+n2;
	n2=n1-n2;
	n1=n1-n2;
	printf("\n After swapping number1 and number2 are:%d and %d",n1,n2);
}
