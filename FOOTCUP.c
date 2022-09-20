#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,x,y;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
	    scanf("%d %d",&x, &y);
	    if(x>0 && y>0 && x==y)
	    {
	        printf("YES\n");
	    }
	    else
	        printf("NO\n");
	    
	}
	return 0;
}

