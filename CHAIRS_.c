#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,x,y;
	scanf("%d",&t);
	
	do{
	    scanf("%d %d",&x, &y);
	    if(x>=y)
	       printf("%d",x-y);
	    else
	       printf("0");
	    printf("\n");
	    i++;
	}while(i<t);
	return 0;
}

