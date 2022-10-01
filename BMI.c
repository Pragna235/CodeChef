#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,m,h;
	scanf("%d",&t);
	do{
	    scanf("%d %d",&m, &h);
	    m=m/(h*h);
	    if(m<=18)
	       printf("1\n");
	    else if(m>=19 && m<=24)
	       printf("2\n");
	    else if(m>=25 && m<=29)
	       printf("3\n");
	    else if(m>=30)
	       printf("4\n");
	    i++;
	}while(i<t);
	return 0;
}

