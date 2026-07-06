#include <stdio.h>

int main()
{
    int a[] = {10, 20, 30, 40, 50};
    int start = 0, end = 4, temp;
    int i;
    while(start < end)
    {
        temp = a[start];
        a[start] = a[end];
        a[end] = temp;

        start++;
        end--;
    }

    printf("Reversed Array:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }


}
