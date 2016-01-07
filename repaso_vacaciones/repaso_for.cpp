#include<stdio.h>
#include <stdlib.h>

int main (){

   

    for(int num1=1; num1<=10;num1++)
    {
	for(int num2=1; num2<=10;num2++)
	    printf("%d X %d = %d\n",num1,num2,num1*num2);
	printf("\n");
    
    
    }


return EXIT_SUCCESS;
}
