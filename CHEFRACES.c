#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,x,y,a,b;
	scanf("%d",&t);
	do{
	    scanf("%d %d %d %d",&x, &y, &a, &b);
	    if((x!=a && x!=b) && (y!=a && y!=b))
	       printf("2\n");
	    else if(x==a || y==a)
	    {
	        if(y==b || x==b)
	           printf("0\n");
	        else
	           printf("1\n");
	    }
	    else if(x==b || y==b)
	    {
	        if(y==a || x==a)
	           printf("0\n");
	        else
	           printf("1\n");
	    }
	    i++;
	}while(i<t);
	return 0;
}

