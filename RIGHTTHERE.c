#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,x;
	    scanf("%d %d",&n,&x);
	    if(n<=x)
	    printf("YES\n");
	    else
	    printf("NO\n");
	}
	return 0;
}

