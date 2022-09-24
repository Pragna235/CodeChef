#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t;
	long long x,y;
	scanf("%d",&t);
	while(t--){
	    scanf("%ld %ld",&x, &y);
	    if(x>=y)
	       printf("0\n");
	    else
	    {
	        if(y%x==0)
	           printf("%ld\n",(y/x)-1);
	        else
	           printf("%ld\n",y/x);
	  
	    }
	}
	return 0;
}

