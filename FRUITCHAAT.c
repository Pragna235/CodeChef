#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,x,y;
	scanf("%d",&t);
	do{
	    scanf("%d %d",&x, &y);
	    x=x/2;
	    if(y>=x)
	       printf("%d\n",x);
	    else
	       printf("%d\n",y);
	    i++;
	}while(i<t);
	return 0;
}

