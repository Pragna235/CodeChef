#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0, t, m, n;
	scanf("%d", &t);
	
	do{
	    scanf("%d %d",&n,&m);
	    n=n*m;
	    printf("%d",n);
	    printf("\n");
	    i++;
	}while(i<t);
	return 0;
}

