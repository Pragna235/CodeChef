#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,x;
	scanf("%d",&t);
	do{
	    scanf("%d",&x);
	    if(10-x >=3)
	       printf("YES\n");
	    else
	       printf("NO\n");
	    i++;
	}while(i<t);
	return 0;
}

