#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,a,b,max,min;
	scanf("%d",&t);
	do{
	    scanf("%d %d",&a, &b);

	    max=a>b?a:b;

	    min=a<b?a:b;

	    while(min<
           max)
	    {
	        min=min*2;

	    }
	    if(min==max)
	    {
	        printf("YES\n");
	    }
	    else
	       printf("No\n");
	    i++;



	}while(i<t);
	return 0;
}

