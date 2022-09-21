#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,n,x;
	scanf("%d",&t);
	
	do{
	    scanf("%d %d",&n, &x);
	    printf("%d\n",(n/x)/3);
	    i++;}while(i<t);
	return 0;
}

