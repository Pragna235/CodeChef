#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,a,b;
	scanf("%d",&t);
	do{
	    scanf("%d %d",&a, &b);
	    printf("%d\n",a-b);
	    i++;
	}while(i<t);
	return 0;
}

