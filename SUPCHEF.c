#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,m,n,k;
	scanf("%d",&t);
	do{
	    scanf("%d %d %d",&m, &n, &k);
	    if((n*k)<m)
	       printf("YES\n");
	    else
	       printf("NO\n");
	    i++;
	}while(i<t);
	return 0;
}

