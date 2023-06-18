#include<stdio.h>
#include<string.h>
int main()
{
    int i,flag1 = 0,flag2 = 0,flag3 = 0;
    char str[1000] = {'\0'};
    while(gets(str) != NULL)
    {
        for(i = 0;i < strlen(str);i++)
        {
            if(str[i] == 34 && flag1 == 0)
            {
                printf("``");
                flag1 = 1;
            }
            else if(str[i] == 34 && flag1 == 1)
            {
                printf("''");
                flag1 = 0;
            }
            else
                printf("%c",str[i]);
        }
        printf("\n");
    }
    return 0;
}
