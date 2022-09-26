#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,x;
	scanf("%d",&t);
	do{
	    scanf("%d",&x);
	    if(x>65)
	       printf("Overload\n");
	    else if(x<35)
	       printf("Underload\n");
	    else
	       printf("Normal\n");
	    i++;
	}while(i<t);
	return 0;
}

