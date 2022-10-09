#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t;
	scanf("%d",&t);
	do{
	    int arr[10],c1=0,c2=0;
	    for(int i=1;i<=10;i++)
	    {
	        scanf("%d",&arr[i]);
	        if(i%2!=0)
	        {
	            c1+=arr[i];
	        }
	        else if(i%2==0)
	        {
	            c2+=arr[i];
	        }
	        
	        
	    }
	    if(c1==c2)
	           printf("0\n");
	        else if(c1>c2)
	           printf("1\n");
	        else if(c2>c1)
	           printf("2\n");
	        i++;
	}while(i<t);
	return 0;
}

