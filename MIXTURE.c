#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,a,b;
	scanf("%d",&t);
	do{
	    scanf("%d %d",&a, &b);
	    if(a>0 && b>0)
	       printf("Solution\n");
	    else if(a==0)
	       printf("Liquid\n");
	    else if(b==0)
	       printf("Solid\n");
	    i++;
	}while(i<t);
	return 0;
}

