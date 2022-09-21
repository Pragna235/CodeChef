#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,n,m;
	scanf("%d",&t);
	
	do{
	    scanf("%d %d",&n, &m);
	    printf("%d\n",(2*n)+(4*m));
	    i++;
	}while(i<t);
	return 0;
}

