#include <stdio.h>

int main()
{
	int a=1;
	int r,c,s;
    for( r = 1; r <=3 ; r++)
    {
    	for(s=0;s<(3-r);s++){            
    		printf(" ");
		}
        for(c = 1; c<=2*r-1; c++)
        {
        	printf("%d",a++);
        	
            
        }
        printf("\n");
    }

}

