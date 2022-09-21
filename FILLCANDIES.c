#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,n,k,m;
	scanf("%d",&t);
	do{
	    scanf("%d %d %d",&n, &m, &k);
	    if(n<=(k*m))
	       printf("1\n");
	    else if(n%(k*m)==0)
	       printf("%d\n",n/(k*m));
	    else
	       printf("%d\n",(n/(k*m))+1);
	    i++;
	}while(i<t);
	return 0;
}

