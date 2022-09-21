#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,x;
	scanf("%d",&t);
	do{
	    scanf("%d",&x);
	    if (x%5!=0)
	       printf("-1\n");
	    else 
	       printf("%d\n",(x/10)+(x%10/5));
	    i++;
	}while(i<t);
	return 0;
}

