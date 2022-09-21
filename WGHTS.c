#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,w,x,y,z;
	scanf("%d",&t);
	do{
	    scanf("%d %d %d %d",&w, &x, &y, &z);
	    if(x==w || y==w || z==w || x+y==w || y+z==w || x+z==w || x+y+z==w)
	       printf("YES\n");
	    else
	       printf("NO\n");
	    i++;
	}while(i<t);
	return 0;
}

