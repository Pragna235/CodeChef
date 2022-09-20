#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,a,b,c;
	scanf("%d",&t);

	do{
	    scanf("%d %d %d",&a, &b, &c);
	   if((a>b && a<c) || (a>c&&a<b))
        printf("%d",a);
       if ((b>a && b<c) || (b<a && b>c))
        printf("%d",b);
       if ((c>a && c<b) || (c<a && c>b))
        printf("%d",c);
       printf("\n");
       	i++;
	}while(i<t);
	return 0;
}

