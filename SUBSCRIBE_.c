#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,n,x;
	scanf("%d",&t);
	
	do{
	   scanf("%d %d",&n, &x);
	   if(n<6)
	     printf("%d\n",x);
	   else if(n%6==0)
	     printf("%d\n",(n/6)*x);
	   else
	     printf("%d\n",(n/6)*x + x);
	    
	   i++;
	}while(i<t);
	return 0;
}

