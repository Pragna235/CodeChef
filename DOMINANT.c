#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,a,b,c;
	scanf("%d",&t);
	
	do{
	    scanf("%d %d %d",&a, &b, &c);
	    if((a>b+c) || (b>a+c) || (c>a+b))
	       printf("YES\n");
	    else
	       printf("NO\n");
	    i++;
	       
	}while(i<t);
	return 0;
}

