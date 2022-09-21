#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,a,b,c;
	scanf("%d",&t);
	
	do{
	    scanf("%d %d %d",&a, &b, &c);
	    if((b<a) || (b<c))
	       printf("NO\n");
	    else 
	       printf("YES\n");
	    i++;
	}while(i<t);
	return 0;
}

