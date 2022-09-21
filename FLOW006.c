#include <stdio.h>
int main()
{
    int t,n,i=0,rem,sum=0;
    scanf("%d",&t);

    do{
        sum=0;
        scanf("%d",&n);
        while(n!=0)
        {
            rem=n%10;
            sum+=rem;
            n=n/10;
        }

        printf("%d\n",sum);

        i++;
    }while(i<t);

    return 0;
}
