#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,x,y,z;
	scanf("%d",&t);
	do{
	    scanf("%d %d %d",&x,&y,&z);
	    if(x>y && x>z)
	    printf("Setter\n");
	    else if(y>x && y>z)
	    printf("Tester\n");
	    else if(z>x && z>y)
	    printf("Editorialist\n");
	    i++;
	}while(i<t);
	return 0;
}

