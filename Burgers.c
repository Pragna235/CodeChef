#include <stdio.h>

int main(void) {
	// your code goes here
	int t, i, a, b;
	scanf("%d",&t);
	do{
	    scanf("%d %d",&a, &b);
	    if(a<b)
	       printf("%d",a);
	    else
	       printf("%d",b);
	    printf("\n");
	    i++;
	}while(i<t);
	return 0;
}

