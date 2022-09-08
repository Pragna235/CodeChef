#include <stdio.h>

int main(void) {
	// your code goes here
	int t, i, x, y, total;
	scanf("%d",&t);

	do
	{
	    scanf("%d %d",&x, &y);
	    total=x*y;
	    printf("%d",total);
	    printf("\n");
	    i++;
	}while(i<t);
	return 0;
}
