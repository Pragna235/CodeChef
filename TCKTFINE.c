#include <stdio.h>

int main(void) {
	// your code goes here
	int t, i, x, p, q,total=0;
	scanf("%d",&t);
	
	do
	{
	    scanf("%d %d %d",&x, &p, &q);
	    total=(p-q)*x;
	    printf("%d",total);
	    printf("\n");
	    i++;
	}while(i<t);
	return 0;
}

