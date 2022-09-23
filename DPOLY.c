#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,n,degree=0;

	scanf("%d",&t);
	do{

	    scanf("%d",&n);
	    int a[n];
	    for(int i=0;i<n;i++)
        {

            scanf("%d",&a[i]);

        }
        for(int i=0;i<n;i++)
        {
            if(a[i]!=0)
            {
                degree=i;

            }
        }

        printf("%d\n",degree);
        i++;

	}while(i<t);
	return 0;
}

