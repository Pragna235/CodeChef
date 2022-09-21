#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,x;
	scanf("%d",&t);
	do{
	    scanf("%d",&x);
	    if(x%3==0)
	       printf("0\n");
	    else if(x%3>0)
	       printf("%d\n",3-(x%3));
	    i++;
	    
	}while(i<t);
	return 0;
}

