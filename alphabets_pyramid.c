#include<stdio.h>
int main(){
	
	int r,c,s;
	char ch='a';
	
	for(r=0; r<5; r++){
		
		for(s=0;s<2*(5-r)-1;s++){
			printf(" ");
		}
		for(c=0;c<=r;c++){
			printf("%c",ch);
			ch++;
		}
		printf("\n");
	}
    
}

