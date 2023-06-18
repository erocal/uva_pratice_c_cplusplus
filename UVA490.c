#include<stdio.h>
#include<string.h>
int main()
{
    int i = 0,j,x,flag,y = -1,maxlen = 0,ret;
    char str[101][100] = {'\0'};
    while(gets(str[i])!=NULL)
    {
        i++;
    }
    for(x = 0;x < i;x++)
    {
        if( strlen(str[maxlen]) < strlen(str[x]) )
        {
            maxlen = x;
            x = 0;
        }
    }

    maxlen = strlen(str[maxlen]);

    flag = (i-1);
    for(x = 0;x < maxlen;x++)
    {
        for(j = flag;j > y;j--)
        {
            if(str[j][x] != '\0')
            {
                printf("%c",str[j][x]);
            }
            else if(str[j][x] == '\0')
            {
                if(j == y+1)
                    y++;
                else
                    printf(" ");
            }
        }
        if(y == flag)
            break;
        printf("\n");

    }
    return 0;
}
