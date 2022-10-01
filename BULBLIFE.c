#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,n,x,y;
	scanf("%d",&t);
	do{
	    int sum=0;
	    scanf("%d %d",&n,&x);
	    int arr[n-1];
	    for(int i=0;i<n-1;i++)
	    {
	        scanf("%d",&arr[i]);
	        sum+=arr[i];
	        
	    }
	    if(sum/(n-1)>x)
	    {
	        printf("0\n");
	    }
	    else
	    {
	    y=(n*x)-(sum);
	    printf("%d\n",y);}
	    i++;
	    
	    
	}while(i<t);
	return 0;
}

