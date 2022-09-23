#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,n;
	scanf("%d",&t);
	do{
	    scanf("%d",&n);
	    int flag=0;
	    for(int i=1;i<=n;i++)
	    {
	        if(n%i==0)
	           flag++;
	    }
	    if(flag==2)
	       printf("yes\n");
	    else
	       printf("no\n");
	    i++;
	}while(i<t);
	
	return 0;
}

