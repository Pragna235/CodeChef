#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,a,b,m,one,two;
	scanf("%d",&t);
	do{
	    scanf("%d %d %d",&a, &b, &m);
	    one=abs(a-b);
	    if(a>b)
	       two=(m-a)+b;
	    else
	       two=(m-b)+a;
	    if(one<=two)
	       printf("%d\n",one);
	    else
	       printf("%d\n",two);
	    i++;
	       
	}while(i<t);
	return 0;
}

