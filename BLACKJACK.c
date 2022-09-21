#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,a,b;
	scanf("%d",&t);
	do{
	    scanf("%d %d",&a, &b);
	    a=21-(a+b);
	    if(a>=1 && a<=10)
	       printf("%d\n",a);
	    else
	       printf("-1\n");
	    i++;
	}while(i<t);
	return 0;
}

