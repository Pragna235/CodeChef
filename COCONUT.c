#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,x,y,typea,typeb;
	int a,b;
	scanf("%d ",&t);
	do{
	    int total=0;
	    scanf("%d %d %d %d",&x, &y, &a, &b);
	    
	    
	    if(a%x==0)
	    {
	        typea=a/x;
	       
	    }
	    
	    if(b%y==0)
	    {
	        typeb=b/y;
	        
	    }
	    
	    total=typea+typeb;
	    printf("%d\n",total);
	    i++;
	}while(i<t);
	return 0;
}

