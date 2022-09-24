#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,x,m,d;
	scanf("%d",&t);
	do{
	    scanf("%d %d %d",&x, &m, &d);
	    if((m*x)<=(x+d))
	       printf("%d\n",(m*x));
	    else
	       printf("%d\n",(x+d));
	    i++;
	}while(i<t);
	return 0;
}

