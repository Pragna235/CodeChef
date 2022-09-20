#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,x,y;
	scanf("%d",&t);
	
	do{
	    scanf("%d %d",&x, &y);
	    if((3*x)<=(2*y))
	    {
	        printf("%d\n",3*x);
	    }
	    else
	    {
	        printf("%d\n",2*y);
	    }
	    i++;
	}while(i<t);
	return 0;
}

