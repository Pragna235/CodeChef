#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	int a;
	for(int i=0;i<t;i++)
	{
	    scanf("%d",&a);
	    char c[a];
	    scanf("%s",c);
	    for(int j=0;j<strlen(c);j++)
	    {
	        if(c[j]=='A')
	        {
	            c[j]='T';
	        }
	        else if(c[j]=='T')
	        {
	            c[j]='A';
	        }
	        else if(c[j]=='C')
	        {
	            c[j]='G';
	        }
	        else if(c[j]=='G')
	        {
	            c[j]='C';
	        }
	    }
	    
	   for(int k=0;k<strlen(c);k++)
	    {
	        printf("%c",c[k]);
	    }
	        printf("\n");
	    
	}
	return 0;
}
