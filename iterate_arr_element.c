#include<stdio.h>
int main(){
    int a[5]={1,2,3,4,5};
    int ind=0;

    printf("Enter an Index:");
    scanf("%d",&ind);

    for(int i=0;i<5;i++){
        if(i==ind){
            printf("%d",a[i]);
        }
    }

    return 0;
}