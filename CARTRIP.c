#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,x,z=3000;
	scanf("%d",&t);
	
	do{
	    scanf("%d",&x);
	    if(x>300)
	    {
	        
	        printf("%d\n",x*10);
	    }
	    else
	        printf("%d\n",z);
	    i++;
	}while(i<t);
	return 0;
}

