#include <stdio.h>

int main(void) {
	// your code goes here
	int t, i, x, total;
	scanf("%d",&t);
	do{
	    scanf("%d",&x);
	    total=10*x;
	    printf("%d",total);
	    printf("\n");
	    i++;
	}while(i<t);
	return 0;
}

