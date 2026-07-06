#include <stdio.h>

int main()
{
    for(int r = 1; r <= 5; r++)
    {
        for(int s = 1; s <= 5 - r; s++)
        {
            printf("  ");
        }

        for(int c = 1; c <= r; c++)
        {
            printf("1 ");
        }

        printf("\n");
    }

   
}
