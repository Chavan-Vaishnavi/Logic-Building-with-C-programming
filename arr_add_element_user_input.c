#include<stdio.h>

int main() {

    int arr[6] = {1,2,3,4,5};
    int i;

    printf("Before insert: ");
    for(i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nEnter value to store: ");
    scanf("%d", &arr[5]);   // Store input at last index

    printf("After insert: ");
    for(i = 0; i < 6; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
