#include <stdio.h>

int main(void) {
	// your code goes here
	int n, a, b;
	scanf("%d %d %d",&n, &a, &b);
	
	a=n-a;
	b=a-b;
	
	printf("%d %d",a,b);
	return 0;
}

