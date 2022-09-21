#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,a,b,c;
	scanf("%d",&t);
	do{
	    scanf("%d %d %d",&a, &b, &c);
	    if((a>=b && a<=c) || (a>=c && a<=b))
	       printf("%d\n",a);
	    else if((b>=a && b<=c) || (b>=c && b<=a))
	       printf("%d\n",b);
	    else
	       printf("%d\n",c);
	    i++;
	}while(i<t);
	return 0;
}

