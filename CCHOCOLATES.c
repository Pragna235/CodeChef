#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,x,y,z;
	scanf("%d",&t);
	
	do{
	    scanf("%d %d %d",&x, &y, &z);
	    printf("%d\n",((5*x)+(10*y))/z);
	    i++;
	}while(i<t);
	return 0;
}

