#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,n;
	scanf("%d",&t);
	
	do{
	    scanf("%d",&n);
	    printf("%d\n",n*2);
	    i++;
	}while(i<t);
	return 0;
}

