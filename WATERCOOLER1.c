#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,m,x,y;
	scanf("%d",&t);
	do{
	    scanf("%d %d %d",&x, &y, &m);
	    if((x*m)>=y)
	      printf("NO\n");
	    else if((x*m)<y)
	      printf("YES\n");
	      
	    i++;
	}while(i<t);
	return 0;
}

