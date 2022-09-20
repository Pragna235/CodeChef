#include <stdio.h>

int main(void) {
	// your code goes here
	int t, i, n, m, x,total;
	scanf("%d",&t);
	
	do{
	    scanf("%d %d %d",&n, &m, &x);
	    total=(2*(n+m))*x;
	    printf("%d",total);
	    printf("\n");
	    i++;
	}while(i<t);
	return 0;
}

