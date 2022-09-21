#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,a,b,c,d;
	scanf("%d",&t);
	do{
	    scanf("%d %d",&a, &b);
	    scanf("%d %d",&c, &d);
	    if(a<=c && b<=d)
	       printf("POSSIBLE\n");
	    else
	       printf("IMPOSSIBLE\n");
	    i++;
	}while(i<t);
	return 0;
}

