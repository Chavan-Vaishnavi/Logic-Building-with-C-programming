#include<stdio.h>
int main(){ 
    int arr[6]={1,2,3,4,5};
    int i;
    int ele=0;
    
    printf("\nEnter Element:");
    scanf("%d",&ele);
    
    arr[5]=arr[4];
    arr[4]=arr[3];
    arr[3]=arr[2];
    arr[2]=arr[1];
    arr[1]=arr[0];
    arr[0]=ele;
    
    printf("\nAfter adding: ");
    for (i = 0; i <6 ; i++) {
        printf("%d ", arr[i]);
    }	
}

