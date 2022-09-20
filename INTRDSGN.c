#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,a,b,x,y;
	scanf("%d",&t);
	
	do{
	    scanf("%d %d %d %d",&a,&b,&x,&y);
	    a=a+b;
	    x=x+y;
	    if(a<=x)
	    {
	        printf("%d\n",a);
	    }
	    else
	       printf("%d\n",x);
	       i++;
	}while(i<t);
	return 0;
}

