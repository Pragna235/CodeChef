#include <stdio.h>

int main(void) {
	// your code goes here
	int t,i=0,n,x,k;
	scanf("%d",&t);
	
	do{
	    scanf("%d %d %d", &n,&x, &k);
	    k=k/x;
	    if(n<=k)
	       printf("YES\n");
	    else
	       printf("NO\n");
	       i++;
	}while(i<t);
	return 0;
}

