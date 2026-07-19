#include<stdio.h>
int main(){ 
    int arr[6]={1,2,3,4,5};
    int i,j;
    int ele,ind=0;
    printf("\nEnter index:");
    scanf("%d",&ind);
    
    if(ind<5){
       printf("\nEnter Element:");
       scanf("%d",&ele);
    
       for(j=5;j>ind;j--){ //also you can give here j>ind-1;
   	   arr[j]=arr[j-1];
       }
       arr[ind]=ele;
       
       printf("\nAfter adding: ");
       for (i = 0; i <6 ; i++) {
            printf("%d ", arr[i]);
       }	
      }
    else{
    	printf("Please enter correct index.");
	}
}

