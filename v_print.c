#include<stdio.h>
int main(){ 
  int r,c;
  for(r=0;r<4;r++){
     for(c=0;c<7;c++){
		if(c==r || c==6-r)
		  printf("*");
		else
	      printf(" ");
	}
	printf("\n");
	
}
}
