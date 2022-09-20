#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,n,x,y;
	scanf("%d",&t);
	
	do{
	    scanf("%d %d %d",&n, &x, &y);
	    x=x+(2*y);
	    if(x<=n)
	       printf("YES");
	    else
	       printf("NO");
	    printf("\n");
	    i++;
	}while(i<t);
	return 0;
}

