#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,n,x,p,rem,correct,incorrect,total;
	scanf("%d",&t);
	do{
	    scanf("%d %d %d",&n, &x, &p);
	    rem=n-x;
	    correct=x*3;
	    incorrect=rem*(-1);
	    total=correct+incorrect;
	    if(total>=p)
	       printf("PASS\n");
	    else
	       printf("FAIL\n");
	    i++;
	    
	    
	}while(i<t);
	return 0;
}

