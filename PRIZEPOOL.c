#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,x,y;
	scanf("%d",&t);
	
	do{
	    scanf("%d %d",&x, &y);
	    x=(10*x)+(90*y);
	    printf("%d",x);
	    printf("\n");
	    i++;
	}while(i<t);
	return 0;
}

