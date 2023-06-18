#include<stdio.h>
int main()
{
    char num[1000]={'\0'};
    int num1=0,i=0,j,odd=0,even=0;
    while(num1 == 0)
    {
        char num[1000]={'\0'};
        i = 0;
        odd = 0;
        even = 0;
        gets(num);
        if(num[0] == 48)
        {
            i++;
            while(num[i] == 0)
            {
                i++;
                if(i == 1000)
                    return 0;
            }
        }
        for(i = 0;i < 1000;i++)
        {
            if(i % 2 == 0)
                if(num[i] != 0)
                    odd += (num[i]-48);
            if(i % 2 == 1)
                if(num[i] != 0)
                    even += (num[i]-48);

        }
        if(((odd - even) % 11) == 0)
        {
            printf("%s",num);
            printf(" is a multiple of 11.\n");
        }
        else
        {
            printf("%s",num);
            printf(" is not a multiple of 11.\n");
        }
    }
    return 0;
}
