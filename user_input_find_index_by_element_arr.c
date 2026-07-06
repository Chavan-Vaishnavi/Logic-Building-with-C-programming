#include <stdio.h>

int main()
{
    int a[5];
    int ele;
    int i;
    
    printf("Enter 5 array elements:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter an Element: ");
    scanf("%d", &ele);

    for ( i= 0; i < 5; i++)
    {
        if (a[i] == ele)
        {
            printf("Index = %d", i);
        }
    }

    return 0;
}
