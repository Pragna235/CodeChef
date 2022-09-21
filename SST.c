#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,a,b;
	scanf("%d",&t);
	do{
	    scanf("%d %d", &a, &b);
	    a=a*10;
	    b=b*5;
	    if(a>b)
	       printf("FIRST\n");
	    else if(a==b)
	       printf("ANY\n");
	    else
	       printf("SECOND\n");
	    i++;
	       
	}while(i<t);
	return 0;
}

