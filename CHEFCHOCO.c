#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,c,x,y;
	scanf("%d",&t);
	
	do{
	    scanf("%d %d %d",&c, &x, &y);
	    printf("%d\n",(c-x)*y);
	    i++;
	}while(i<t);
	return 0;
}

