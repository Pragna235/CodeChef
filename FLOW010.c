#include<stdio.h>
int main()
{
    int i=0,t;
    char c;
    scanf("%d",&t);
    do{
        scanf("%c",&c);
        if(c=='B' || c=='b')
           printf("BattleShip\n");
        else if(c=='C' || c=='c')
           printf("Cruiser\n");
        else if(c=='D' || c=='d')
           printf("Destroyer\n");
        else if(c=='F' || c=='f')
           printf("Frigate\n");
        i++;
    }while(i<t+t);
    return 0;
}