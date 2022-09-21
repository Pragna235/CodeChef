#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,n,x,k;
	scanf("%d",&t);
	do{
	    scanf("%d %d %d",&n, &x, &k);
	    if(k>= n*x)
	       printf("%d\n",n);
	    else
	       printf("%d\n",k/x);
	    i++;
	}while(i<t);
	return 0;
}

