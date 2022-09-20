#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,x,k;
	scanf("%d",&t);
	
	do{
	    scanf("%d %d",&x, &k);
	    printf("%d\n",x-k);
	    i++;
	}while(i<t);
	return 0;
}

