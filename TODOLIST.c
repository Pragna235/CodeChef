#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,j,n,a[1000],count=0;
	scanf("%d",&t);
	
	do{
	    scanf("%d",&n);
	    for(j=0;j<n;j++)
	    {
	       
	        scanf("%d",&a[j]);
	        if(a[j]>=1000)
	        {
	            count++;
	        }
	    }
	    printf("%d\n",count);
	    count=0;
	    i++;
	}while(i<t);
	return 0;
}

