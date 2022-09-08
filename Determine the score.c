#include <stdio.h>

int main(void) {
	// your code goes here
	int t, i=0, x, n, tc, total;
	scanf("%d",&t);
	do{
	    scanf("%d %d",&x, &n);
	    tc=x/10;
	    total=tc*n;
	    printf("%d",total);
	    printf("\n");
	    i++;
	}while(i<t);

	return 0;
}


