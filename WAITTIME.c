#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,k,x;
	scanf("%d",&t);
	
	do{
	    scanf("%d %d",&k,&x);
	    k=k*7;
	    x=k-x;
	    printf("%d",x);
	    printf("\n");
	    i++;
	}while(i<t);
	return 0;
}

