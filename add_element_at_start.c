#include <stdio.h>

int main()
{
    int a[10] = {10, 20, 30, 40, 50};
    int n = 5;
    int i,ele;

    printf("Before adding: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    
    printf("\nEnter new element: ");
    scanf("%d", &ele);

    // Shift elements to the right
    for (i = n; i > 0; i--)
    {
        a[i] = a[i - 1];
    }

    // Insert at the beginning
    a[0] = ele;
    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
