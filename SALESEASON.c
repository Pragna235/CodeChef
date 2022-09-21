#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,x;
	scanf("%d",&t);
	do{
	    scanf("%d",&x);
	    if(x<=100)
	       printf("%d\n",x);
	    else if(x>100 && x<=1000)
	       printf("%d\n",x-25);
	    else if(x>1000 && x<=5000)
	       printf("%d\n",x-100);
	    else
	       printf("%d\n",x-500);
	    i++;
	    
	}while(i<t);
	return 0;
}

