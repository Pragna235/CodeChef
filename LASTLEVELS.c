#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,x,y,z;
	scanf("%d",&t);
	do{
	    scanf("%d %d %d",&x, &y, &z);
	    if(x<=3)
	       printf("%d\n",(x*y));
	    else if(x%3!=0)
	       printf("%d\n",(x*y)+(x/3 *z));
	    else if(x%3==0)
	       printf("%d\n",(x*y)+((x/3)-1)*z);
	    i++;
	}while(i<t);
	return 0;
}

