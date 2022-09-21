#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,a,b,c,d,p1,p2;
	scanf("%d",&t);
	do{
	    scanf("%d %d %d %d",&a, &b, &c, &d);
	    if(b>=a)
	       p1=b;
	    else
	       p1=a;
	    if(d>=c) 
	       p2=d;
	    else
	       p2=c;
	    if(p1<p2)
	       printf("P\n");
	    else if(p1==p2)
	       printf("TIE\n");
	    else
	       printf("Q\n");
	    i++;
	    
	       
	}while(i<t);
	return 0;
}

