#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,x,y,d;
	scanf("%d",&t);
	do{
	    scanf("%d %d %d",&x, &y, &d);
	    if(abs(x-y)<=d)
	       printf("YES\n");
	    else
	       printf("NO\n");
	    i++;
	}while(i<t);
	return 0;
}

