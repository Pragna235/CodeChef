#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,a,b,c,d;
	scanf("%d",&t);
	do{
	    scanf("%d %d %d %d",&a, &b, &c, &d);
	    if(a+c==180 && b+d==180)
	       printf("YES\n");
	    else
	       printf("NO\n");
	    i++;
	}while(i<t);
	return 0;
}

