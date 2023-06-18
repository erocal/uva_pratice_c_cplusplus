#include<stdio.h>
int main()
{
    int num,a,b,x,y;
    scanf("%d",&num);
    while(num--)
    {
        scanf("%d%d",&a,&b);
        if((a-b) < 0 || ((a-b) % 2) == 1)
            printf("impossible\n");
        else
        {
            y = (a-b) / 2;
            x = a - y;
            if(x > y)
                printf("%d %d\n",x,y);
            else
                printf("%d %d\n",y,x);
        }
    }
    return 0;
}
