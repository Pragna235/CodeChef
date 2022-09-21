#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,x,y;
	scanf("%d",&t);
	do{
	    scanf("%d %d",&x, &y);
	    if(x>=y)
	       printf("%d\n",x-y);
	    else
	       printf("%d\n",y-x);
	    
	    
	    i++;
	}while(i<t);
	return 0;
}

