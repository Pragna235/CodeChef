#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,n,x;
	scanf("%d",&t);
	do{
	    scanf("%d %d",&n, &x);
	    if(x>=n && x%n==0)
	       printf("Yes\n");
	    else
	       printf("No\n");
	    i++;
	}while(i<t);
	return 0;
}

