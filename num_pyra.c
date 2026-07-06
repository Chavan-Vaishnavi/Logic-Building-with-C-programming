#include <stdio.h>

int main()
{
	
	int r,c,s;
    for( r = 1; r <=5 ; r++)
    {
    	int a=5;
    	for(s=0;s<(5-r);s++){            
    		printf(" ");
		}
        for(c = 1; c<=2*r-1; c++)
        {
        	printf("%d",a);
        	a++;
        	
            
        }
        printf("\n");
    }

}

