#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,n,k;
	scanf("%d",&t);
	
	do{
	    scanf("%d %d",&n, &k);
	    if(n<k)
	       printf("YES");
	    else
	       printf("NO");
	    printf("\n");
	    i++;
	}while(i<t);
	return 0;
}

