#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,n,total=0;
	scanf("%d",&t);
	do{
	    scanf("%d",&n);
	    if(n%100==0)
	    {
	        printf("%d\n",n/100);
	    }
	    else
	    {
	        total=n/100;
	        n=n%100;
	        if(n%50==0)
	        {
	            total+=n/50;
	            printf("%d\n",total);
	        }
	        else{
	            total+=n/50;
	            n=n%50;
	            if(n%10==0)
	            {
	                total+=n/10;
	                printf("%d\n",total);
	            }
	            else
	            {
	                total+=n/10;
	                n=n%10;
	                if(n%5==0)
	                {
	                    total+=n/5;
	                    printf("%d\n",total);
	                }
	                else
	                {
	                    total+=n/5;
	                    n=n%5;
	                    if(n%2==0)
	                    {
	                        total+=n/2;
	                        printf("%d\n",total);
	                    }
	                    else
	                    {
	                        total+=n/2;
	                        n=n%2;
	                        total+=n;
	                        printf("%d\n",total);
	                    }
	                }
	            }
	        }
	        
	    }
	    i++;
	}while(i<t);
	return 0;
}

