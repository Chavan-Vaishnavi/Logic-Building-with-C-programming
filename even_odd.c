#include<stdio.h>
int main(){
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	
	if(num<0){
		printf("Enter a non-zero number");
	}
	else if(num%2==0){
		printf("%d is even number",num);
	}
	else{
		printf("%d is odd number",num);
	}
}
