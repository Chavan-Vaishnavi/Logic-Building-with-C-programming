#include<stdio.h>
int main(){ 
    int arr[6]={1,2,3,4,5};
    int i,j;
    int ele=0;
    
    printf("\nEnter Element:");
    scanf("%d",&ele);
    
   for(j=5;j>0;j--){
   	arr[j]=arr[j-1];
   }
    arr[0]=ele;
    printf("\nAfter adding: ");
    for (i = 0; i <6 ; i++) {
        printf("%d ", arr[i]);
    }	
}

