#include<stdio.h>
int main(){
	
	int i;
	char str[5]="ABCDE";
	int ind=1;
	
	for(i=0;i<5;i++){
		//if(i==1){
		if(i==ind){
		
		printf("%c",str[i]);
	    }
	}
}
