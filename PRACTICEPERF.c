#include <stdio.h>

#include <stdio.h>

int main(void)
{
	int p[4],count=0,i;
	for(i=0;i<4;i++)
	{
	    scanf("%d",&p[i]);
	}
	for(i=0;i<4;i++)
	{
	   if(p[i]>=10)
	   count++;
	}
	printf("%d",count);
	return 0;
}

