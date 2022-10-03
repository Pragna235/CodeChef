#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,n,s;
	scanf("%d",&t);
	do{
	    scanf("%d %d",&n, &s);
	    printf("%d\n",n/s);
	    i++;
	}while(i<t);
	return 0;
}

