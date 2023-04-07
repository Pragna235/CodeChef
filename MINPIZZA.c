#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,n,x;
	scanf("%d",&t);
	do{
	    scanf("%d %d",&n,&x);
	    n=n*x;
	    int res=n/4;
	    if(n%4!=0)
	    res++;
	    printf("%d\n",res);
	    i++;
	}while(i<t);
	return 0;
}

