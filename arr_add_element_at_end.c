#include<stdio.h>
int main(){ 
    int arr[]={1,2,3,4,5};
	int n = 5;
    int i;
    
    printf("Before adding: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    arr[n] = 6;
    n++;
    
    printf("\nAfter adding: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }	
}

