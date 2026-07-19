#include<stdio.h>
int main(){
	int i,j,s;
	
	for(i=1;i<=3;i++){
		char ch='A';
		for(s=1;s<=3-i;s++){
			printf(" ");
		}
		for(j=1;j<=(2*i-1);j++){
			printf("%c",ch);
			ch++;
		}  
		printf("\n");
    }
	
	for(i=2;i>=1;i--){
		char ch='A';
		for(s=1;s<=3-i;s++){
			printf(" ");
		}
		for(j=1;j<=(2*i-1);j++){
			printf("%c",ch);
			ch++;
		}
		printf("\n");
	}
	
}
