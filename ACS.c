#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,p;
	scanf("%d",&t);
	do{
	    scanf("%d",&p);
	    if(p>=0 && p<=10)
	       printf("%d\n",p);
	    else
	       {
	           p=(p/100)+(p%100);
	           if(p<=10)
	              printf("%d\n",p);
	           else
	              printf("-1\n");
	       }
	    i++;
	}while(i<t);
	return 0;
}

