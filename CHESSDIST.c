#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,x1,y1,x2,y2;
	scanf("%d",&t);
	do{
	    scanf("%d %d %d %d",&x1, &y1, &x2, &y2);
	    if(abs(x1-x2)>=abs(y1-y2))
	       printf("%d\n",abs(x1-x2));
	    else
	       printf("%d\n",abs(y1-y2));
	    i++;
	}while(i<t);
	return 0;
}

