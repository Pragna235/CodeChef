#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,x1,x2,y1,y2,z1,z2;
	scanf("%d",&t);
	do{
	    scanf("%d %d %d %d %d %d",&x1, &x2, &y1, &y2, &z1, &z2);
	    if(x2>=x1 && y2>=y1 && z2<=z1)
	       printf("YES\n");
	    else
	       printf("NO\n");
	    i++;
	}while(i<t);
	return 0;
}

