#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,x;
	scanf("%d",&t);
	do{
	    scanf("%d",&x);
	    if(x<3)
	       {
	           if(x==0)
	              printf("NORMAL\n");
	           else if(x==1)
	              printf("HUGE\n");
	           else
	              printf("SMALL\n");
	       }
	    else
	      {
	          if(x%3==0)
	             printf("NORMAL\n");
	          else if(x%3==1)
	             printf("HUGE\n");
	          else
	             printf("SMALL\n");
	      }
	    i++;
	}while(i<t);
	return 0;
}

