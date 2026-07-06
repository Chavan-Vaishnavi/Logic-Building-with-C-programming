#include <stdio.h>

int main()
{
    char ch = 'A';
    int r,s,c;
    
    for(r = 1; r <= 5; r++)
    {
        // spaces
        for(s = 1; s <= 5 - r; s++)
        {
            printf("  ");
        }

        // alphabets
        for(c = 1; c <= r; c++)
        {
            printf("%c ", ch);
            ch++;
        }

        printf("\n");
    }


}
