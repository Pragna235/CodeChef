#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,d,x,y,z,way1,way2;
	scanf("%d",&t);
	do{
	    scanf("%d %d %d %d",&d, &x, &y, &z);
	    way1=x*7;
	    way2=(y*d)+ z*(7-d);
	    if(way1>=way2)
	       printf("%d\n",way1);
	    else
	       printf("%d\n",way2);
	    i++;
	}while(i<t);
	return 0;
}

