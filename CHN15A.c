#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,n,k,a[100],count=0;
	scanf("%d",&t);
	do{
	    scanf("%d %d",&n,&k);
	    for(int j=0;j<n;j++)
	    {
	        scanf("%d",&a[j]);
	        if((a[j]+k) % 7==0)
	           count++;
	    }
	    printf("%d\n",count);
	    count=0;
	    i++;
	    
	}while(i<t);
	return 0;
}

