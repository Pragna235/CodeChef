#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,r;
	scanf("%d",&t);
	do{
	    scanf("%d",&r);
	    if(r%25==0)
	       printf("%d\n",r/25);
	    else
	       printf("%d\n",(r/25)+1);
	    i++;
	}while(i<t);
	return 0;
}

