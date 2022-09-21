#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,x;
	scanf("%d",&t);
	
	do{
	    scanf("%d",&x);
	    if(100>=(x*0.1))
	       printf("100\n");
	    else
	       printf("%d\n",(x/100)*10);
	    i++;
	   
	}while(i<t);
	return 0;
}

