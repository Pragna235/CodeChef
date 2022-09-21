#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,w,x,y,z;
	scanf("%d",&t);
	
	do{
	    scanf("%d %d %d %d",&w, &x, &y,&z);
	    if(z*y < x-w)
	       printf("unfilled\n");
	    else if(z*y == x-w)
	       printf("filled\n");
	    else
	       printf("overflow\n");
	    i++;
	}while(i<t);
	return 0;
}

