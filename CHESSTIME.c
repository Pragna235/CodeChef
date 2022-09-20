#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,n;
	scanf("%d",&t);
	
	do{
	    scanf("%d",&n);
	    n=n*60;
	    n=n/20;
	    printf("%d",n);
	    printf("\n");
	    i++;
	}while(i<t);
	return 0;
}

