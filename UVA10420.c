#include<stdio.h>
#include<string.h>
int main()
{
    int num,i,j,eng=0,spa=0;
    char str1[76]={'\0'};
    char en[8] = "England";
    char sp[6] = "Spain";
    char *ans;

    scanf("%d",&num);
    scanf("\n");
    for(i = 0; i < num; i++)
    {
        ans = NULL;
        memset(str1,'\0',75);
        gets(str1);
        ans = strstr(str1,en);
        if(ans != NULL)
            eng++;
        ans = NULL;
        ans = strstr(str1,sp);
        if(ans != NULL)
            spa++;
    }
    setbuf(stdin, NULL);
    printf("%s %d\n",en,eng);
    setbuf(stdin, NULL);
    printf("%s %d\n",sp,spa);
    return 0;
}
