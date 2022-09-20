#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,x;
	scanf("%d",&t);
	
	do{
	    scanf("%d",&x);
	    x=(x*60);
	    printf("%d\n",x/30);
	    i++;
	}while(i<t);
	return 0;
}

