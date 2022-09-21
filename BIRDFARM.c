#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,x,y,z;
	scanf("%d",&t);
	do{
	    scanf("%d %d %d",&x, &y, &z);
	    if(z%x==0 && z%y==0)
	       printf("ANY\n");
	    else if(z%x==0)
	       printf("CHICKEN\n");
	    else if(z%y==0)
	       printf("DUCK\n");
	    else
	       printf("NONE\n");
	    i++;
	}while(i<t);
	return 0;
}

