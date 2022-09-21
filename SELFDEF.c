#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,n,a[100],count=0;
	scanf("%d",&t);
	do{
	    
	    scanf("%d",&n);
	    for(int j=0;j<n;j++)
	       {scanf("%d",&a[j]);}
	    for(int k=0;k<n;k++)
	    {
	        if(a[k]>=10 && a[k]<=60)
	           count++;
	    }
	    
	    printf("%d\n",count);
	    i++;
	    count=0;
	}while(i<t);
	return 0;
}

