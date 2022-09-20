#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,c;
	scanf("%d",&t);
	
	do{
	    scanf("%d",&c);
	    if(c>20)
	       printf("HOT\n");
	    else
	       printf("COLD\n");
	    i++;
	}while(i<t);
	return 0;
}

