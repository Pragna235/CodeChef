#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,x,y,z;
	scanf("%d",&t);
	do{
	    scanf("%d %d %d",&x, &y, &z);
	    if(x+y <z)
	       printf("PLANEBUS\n");
	    else if(x+y == z)
	       printf("EQUAL\n");
	    else
	       printf("TRAIN\n");
	    i++;
	}while(i<t);
	return 0;
}

