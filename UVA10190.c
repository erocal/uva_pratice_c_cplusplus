#include<stdio.h>
int main()
{
    unsigned long long int num1,num2,i,flag,notdivid;
    while(scanf("%llu%llu",&num1,&num2)!=EOF)
    {
        notdivid = 0;
        flag = num1;
        while(flag != 1 && flag > 0 && num2 > 0)
        {
            if(flag % num2 != 0)
            {
                notdivid = 1;
                printf("Boring!\n");
                break;
            }
            else if(flag % num2 == 0)
            {
                flag /= num2;
            }
        }
        if(notdivid == 0 && num1 > 0 && num2 > 0)
        {
            while(num1 > 0)
            {
                printf("%llu",num1);
                num1 /= num2;
                if(num1 > 0)
                    printf(" ");
            }
            printf("\n");
        }
        else if(num1 == 0 || num2 == 0)
        {
            printf("Boring!\n");
        }
    }
    return 0;
}
