#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,a,b,c;
	scanf("%d %d %d",&a, &b, &c);
	if(a==b || a==c)
	   printf("YES\n");
	else if(b==a || b==c)
	   printf("YES\n");
	else if(c==a || c==b)
	   printf("YES\n");
	else
	   printf("NO\n");

	return 0;
}

