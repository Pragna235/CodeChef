#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int s1=0,s2=0,lead=0,win,diff;
    for(int i=0;i<n;i++)
    {
        int q1,q2;
        scanf("%d %d",&q1,&q2);
        s1+=q1;
        s2+=q2;
        if(s1>s2)
        {
            diff=s1-s2;
            if(diff>lead)
            {
                lead=diff;
                win=1;
            }
        }
        else
        {
            diff=s2-s1;
            if(diff>lead)
            {
                lead=diff;
                win=2;
            }
        }
        
    }
    printf("%d %d",win, lead);
    return 0;
}