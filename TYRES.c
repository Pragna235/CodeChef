#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,n;
	scanf("%d",&t);
	do{
	    scanf("%d",&n);
	    if(n%4>=2)
	       printf("YES\n");
	    else 
	       printf("NO\n");
	    i++;
	}while(i<t);
	return 0;
}

