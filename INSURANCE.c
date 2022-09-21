#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,x,y;
	scanf("%d",&t);
	
	do{
	    scanf("%d %d",&x, &y);
	    if(y<=x)
	       printf("%d\n",y);
	    else
	       printf("%d\n",x);
	       i++;
	}while(i<t);
	return 0;
}

