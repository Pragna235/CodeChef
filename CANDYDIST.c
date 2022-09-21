#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,n,m;
	scanf("%d",&t);
	do{
	    scanf("%d %d",&n, &m);
	    if(n%m==0)
	    {
	        if((n/m)%2==0)
	           printf("YES\n");
	        else
	           printf("NO\n");
	    }
	    else
	       printf("NO\n");
	    i++;
	}while(i<t);
	return 0;
}

