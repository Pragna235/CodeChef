#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,a,b,c,d;
	scanf("%d",&t);
	do{
	    scanf("%d %d %d %d",&a, &b, &c, &d);
	    if(a!=c && b!=d)
	       printf("1\n");
	    else if(a==c || b==d)
	       printf("2\n");
	    else
	       printf("3\n");
	    i++;
	}while(i<t);
	return 0;
}

