#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,n,count=0;
	scanf("%d",&t);
	do{
	    scanf("%d",&n);
	    int s[n],d[n];
	    for(int j=0;j<n;j++)
	    {
	        scanf("%d",&s[j]);
	    }
	    for(int k=0;k<n;k++)
	    {
	        scanf("%d",&d[k]);
	    }
	    for(int g=0;g<n;g++)
	    {
	        if(s[g]==d[g])
	           count++;
	    }
	    printf("%d\n",count);
	    i++;
	    count=0;
	}while(i<t);
	return 0;
}

