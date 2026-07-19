#include<stdio.h>
int main(){
	
	int i,ind;
	
	char arr[5]={'a','b','c','d','e'};
	
	printf("Enter index:");
	scanf("%d",&ind);
	
	for(i=0;i<5;i++){
		if(i==ind){
		
		printf("%c",arr[i]);
	    }
	}
		
}
