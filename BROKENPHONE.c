#include <stdio.h>

int main(void) {
	// your code goes here
	int i,T, X, Y;
	scanf("%d",&T);
	
	for(i=0;i<T;i++)
	{
	    scanf("%d %d",&X, &Y);
	    if(X>Y)
	    {printf("NEW PHONE");}
	    else if(Y>X)
	    {printf("REPAIR");}
	    else
	    {printf("ANY");}
	    printf("\n");
	}
	return 0;
}

