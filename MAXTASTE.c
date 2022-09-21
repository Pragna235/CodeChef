#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,a,b,c,d,taste=0;
	scanf("%d",&t);
	do{
	    scanf("%d %d %d %d",&a, &b, &c, &d);
	    if(a>=b)
	       taste=a;
	    else
	       taste=b;
	    if(c>=d)
	       taste+=c;
	    else
	       taste+=d;
	    printf("%d\n",taste);
	    i++;
	}while(i<t);
	return 0;
}

