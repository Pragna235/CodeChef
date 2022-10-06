#include<stdio.h>
int main()
{
    int i=0,t,n;
    scanf("%d",&t);
    do{
        scanf("%d",&n);
        int arr[n],count=0;
        
        for (int i=0;i<n;i++)
        {
            
            scanf("%d",&arr[i]);
            if(arr[i]%7!=0 && ((arr[i])%7 != 6))
               count++;
               
               //printf(count);
        }
        printf("%d\n",8+count);
        i++;
        
           
    }while(i<t);
    
    
    
    
    
    
    
    return 0;
}