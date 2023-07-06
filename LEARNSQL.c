#include <stdio.h>

int main(void) {
	// your code goes here
	int r,c,e;
	scanf("%d %d %d",&r,&c,&e);

	int cells = (r+e)*c;
	printf("%d",cells);
	
	return 0;
}

