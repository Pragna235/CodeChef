#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,x,y,d,e;
	scanf("%d",&t);
	do{
	    scanf("%d %d ",&x, &y);
	    d=500-(x*2)+1000-(x+y)*4;
	    e=500-(y*4)+1000-(x+y)*2;
	    if(d>=e)
	       printf("%d\n",d);
	    else
	       printf("%d\n",e);
	    i++;
	    
	}while(i<t);
	return 0;
}

