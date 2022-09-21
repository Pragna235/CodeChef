#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,a,b,x,y;
	scanf("%d",&t);
	
	do{
	    scanf("%d %d %d %d",&a, &b, &x, &y);
	    if(x*y >= a*b)
	       printf("YES\n");
	    else
	       printf("NO\n");
	    i++;
	}while(i<t);
	return 0;
}

