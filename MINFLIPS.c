#include <stdio.h>
int abs(int a)
{
    if(a<0)
    return -1*a;
    else
    return a;
}
int main(void) {
	// your code goes here
    int tc,i,n;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%d",&n);
        int arr[n];
        int sum=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
            sum = sum + arr[i];
        }
        if (n%2==1)
        printf("-1\n");
        else
        printf("%d\n",abs(sum)/2);
    }
	return 0;
}

