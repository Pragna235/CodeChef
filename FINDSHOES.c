#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,n,m,total,left;
	scanf("%d",&t);
	do{
	    scanf("%d %d",&n, &m);
	    total=n*2;
	    if(n<=m)
            printf("%d\n",n);
        else
	        printf("%d\n",(2*n)-m);
	    i++;
	}while(i<t);
	return 0;
}
