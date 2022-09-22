#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,a,b,c;
	scanf("%d",&t);
	do{
	    scanf("%d %d %d",&a, &b, &c);
	    if(a<=b && a<=c)
	       printf("%d\n",b+c);
	    else if(b<=a && b<=c)
	       printf("%d\n",a+c);
	    else if(c<=a && c<=b)
	       printf("%d\n",a+b);
	    i++;
	}while(i<t);
	return 0;
}

