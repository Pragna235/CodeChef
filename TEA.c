#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,x,y,z;
	scanf("%d",&t);
	do{
	    scanf("%d %d %d",&x, &y, &z);
	    if(x<=y)
	       printf("%d\n",z);
	    else
	       {if(x%y==0)
	          printf("%d\n",(x/y)*z);
	        else
	          printf("%d\n",((x/y) +1)*z);}
	    i++;
	    
	}while(i<t);
	return 0;
}

