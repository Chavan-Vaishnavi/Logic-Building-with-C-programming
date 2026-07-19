#include <stdio.h>

int main()
{
	int r,c,s;
    for( r = 0; r <5 ; r++)
    //for( r = 1; r < =5 ; r++)
    {
    	for(s=0;s<2*(5-r-1);s++){
    	//for(s=1; s<=1*(5-r); s++){       //to remove spaces between star
    	//for(s=1;s<(5-r);s++){            //OR this 
    		printf(" ");
		}
        for(c = 0; c<=2*r+1; c++)
        //for(c = 1; c=<2*r-1; c++)
        {
        	printf("* ");
            //printf("*");
        }
        printf("\n");
    }

}

