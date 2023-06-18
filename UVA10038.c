#include<stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    int i = 0,max,min,j,ans,num1,num2,num3,x,y;
    while(scanf("%d",&num3)!=EOF)
    {
        int num[100] = {'\0'};
        int num4[100] = {'\0'};
        max = num3;
        min = 0;
        j = num3;
        ans = 0;
        for(i = 0;i < j;i++)
        {
            scanf("%d",&num[i]);
        }
        if(num3 == 1)
            printf("Jolly\n");
        for(i = 0;i < j-1;i++)
        {
            if(ans == 0)
            {
                    num1 = abs(num[i]-num[i+1]);
                    if(num1 > min && num1 < max)
                        num4[i] = num1;
                    else
                        ans = 1;
                    for(x = 0 ; x < i+1 ; x++)
                    {
                        for(y = x+1 ; y < i+1; y++)
                        {
                            if(num4[x] == num4[y])
                                ans = 1;
                        }
                    }
                    if(i == (j-2) && ans == 0)
                        printf("Jolly\n");
            }
            if(ans == 1)
            {
                printf("Not jolly\n");
                break;
            }
        }
    }
}
