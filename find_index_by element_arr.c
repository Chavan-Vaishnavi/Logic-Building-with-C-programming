#include <stdio.h>

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int ele = 0;
    int i; 
    
    printf("Enter an Element: ");
    scanf("%d", &ele);

    for (i = 0; i < 5; i++)
    {
        if (a[i] == ele)
        {
            printf("\nIndex is:%d", i);
        }
    }

    return 0;
}
