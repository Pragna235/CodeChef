#include <stdio.h>

int main(void) {
	// your code goes here
	int T,X,Y,Z,i=0,credits;
	scanf("%d",&T);
	do
	{
	    scanf("%d %d %d",&X, &Y, &Z);
	    credits=(4*X)+(2*Y);
	    printf("%d",credits);
	    printf("\n");
	    i++;
	}while(i<T);
	return 0;
}

