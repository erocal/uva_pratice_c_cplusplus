#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,x,y,flag1 = 0,flag2 = 0;
    char str1[1001] = {'\0'};
    char str2[1001] = {'\0'};
    char letter[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    while(gets(str1)!=NULL)
    {
        gets(str2);
        for(i = 0;i < 26;i++)
        {
            flag1 = 0;
            for(j = 0;j < strlen(str1);j++)
            {
                flag2 = 0;
                if(str1[j] == letter[i])
                {
                    flag1++;

                    for(x = 0;x < strlen(str2);x++)
                    {
                        if(str2[x] == letter[i])
                        {
                            flag2++;
                            if(flag1 == flag2)
                                printf("%c",letter[i]);
                        }
                    }
                }
            }
        }
        printf("\n");
        memset(str1,'\0',1001);
        memset(str2,'\0',1001);
    }

    return 0;
}
