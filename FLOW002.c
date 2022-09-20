//We have populated the solutions for the 10 easiest problems for your support.
//Click on the SUBMIT button to make a submission to this problem.

#include<stdio.h>
 int main()
{
    int i=0,t,a,b;
    scanf("%d",&t);
    
    do{
        scanf("%d %d",&a, &b);
        printf("%d\n",a%b);
        i++;
    }while(i<t);
    return 0;
	
}
