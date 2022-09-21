#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,n;
	scanf("%d",&t);
	do{
	    scanf("%d",&n);
	    if(n%4==0)
	       printf("Good\n");
	    else
	       printf("Not Good\n");
	    i++;
	    
	}while(i<t);
	return 0;
}

