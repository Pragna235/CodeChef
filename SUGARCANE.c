#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t;
	int n,per;
	scanf("%d",&t);
	
	do{
	    scanf("%d",&n);
	    
	    printf("%d\n",((50*n)-((50*n)*70)/100));
	    i++;
	}while(i<t);
	return 0;
}

