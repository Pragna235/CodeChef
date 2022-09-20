#include <stdio.h>

int main(void) {
	// your code goes here
	int t,i=0,x,y,z;
	scanf("%d",&t);
	
	do{
	    scanf("%d %d %d",&x, &y, &z);
	    x=x-y+z;
	    printf("%d\n",x);
	    i++;
	}while(i<t);
	return 0;
}

