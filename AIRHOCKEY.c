#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,a,b;
	scanf("%d",&t);
	
	do{
	    scanf("%d %d",&a, &b);
	    if(a>=b)
	       printf("%d\n",7-a);
	    if(b>a)
	       printf("%d\n",7-b);
	    i++;
	}while(i<t);
	return 0;
}

