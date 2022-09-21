#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,x,a,b;
	scanf("%d",&t);
	do{
	    scanf("%d %d %d",&x, &a, &b);
	    if((a+ 2*b)>=x)
	       printf("Qualify\n");
	    else
	       printf("NOtQualify\n");
	    i++;
	}while(i<t);
	return 0;
}

