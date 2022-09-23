#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,n;

	scanf("%d",&t);

	do{
	    int c1=0,c2=0;

	    scanf("%d",&n);

	    fflush(stdin);
	    char s1[]="START38";

	    char s2[]="LTIME108";

	    char s[100];
	    for(int i=0;i<n;i++)
	    {
	        scanf("%s",s);



	        if(strcmp(s1,s)==0)
	        {
	            c1++;


	        }
	        else if(strcmp(s2,s)==0)
	        {
               c2++;

	        }
	    }
	    printf("%d %d\n",c1,c2);
	    i++;

	}while(i<t);
	return 0;
}