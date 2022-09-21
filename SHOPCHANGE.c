#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,x;
	scanf("%d",&t);
	do{
	    scanf("%d",&x);
	    printf("%d\n",100-x);
	    i++;
	}while(i<t);
	
	return 0;
}

