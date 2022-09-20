#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,n,m,k;
	scanf("%d",&t);
	
	do{
	    scanf("%d %d %d",&n, &m, &k);
	    m=m*k;
	    if(m>=n)
	      printf("YES\n");
	    else
	      printf("NO\n");
	    i++;
	}while(i<t);
	return 0;
}

