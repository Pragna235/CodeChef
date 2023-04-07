#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,x,y,z,a;
	scanf("%d",&t);
	do{
	    scanf("%d %d %d %d",&x,&y,&z,&a);
	    if((x+y)>=a || (y+z)>=a || (z+x)>=a)
	    printf("YES\n");
	    else
	    printf("NO\n");
	    i++;
	}while(i<t);
	return 0;
}

