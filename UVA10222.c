#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char str[1000] = {'\0'};
    while(gets(str)!=NULL)
    {
        for(i = 0;i < strlen(str);i++)
        {
            if(str[i] == 32)
                printf(" ");
            else if(str[i] == 69 || str[i] == 101)
                printf("q");
            else if(str[i] == 68 || str[i] == 100)
                printf("a");
            else if(str[i] == 67 || str[i] == 99)
                printf("z");
            else if(str[i] == 82 || str[i] == 114)
                printf("w");
            else if(str[i] == 70 || str[i] == 102)
                printf("s");
            else if(str[i] == 86 || str[i] == 118)
                printf("x");
            else if(str[i] == 84 || str[i] == 116)
                printf("e");
            else if(str[i] == 71 || str[i] == 103)
                printf("d");
            else if(str[i] == 66 || str[i] == 98)
                printf("c");
            else if(str[i] == 89 || str[i] == 121)
                printf("r");
            else if(str[i] == 72 || str[i] == 104)
                printf("f");
            else if(str[i] == 78 || str[i] == 110)
                printf("v");
            else if(str[i] == 85 || str[i] == 117)
                printf("t");
            else if(str[i] == 74 || str[i] == 106)
                printf("g");
            else if(str[i] == 77 || str[i] == 109)
                printf("b");
            else if(str[i] == 73 || str[i] == 105)
                printf("y");
            else if(str[i] == 75 || str[i] == 107)
                printf("h");
            else if(str[i] == 44)
                printf("n");
            else if(str[i] == 79 || str[i] == 111)
                printf("u");
            else if(str[i] == 76 || str[i] == 108)
                printf("j");
            else if(str[i] == 46)
                printf("m");
            else if(str[i] == 80 || str[i] == 112)
                printf("i");
            else if(str[i] == 59)
                printf("k");
            else if(str[i] == 91)
                printf("o");
            else if(str[i] == 39)
                printf("l");
            else if(str[i] == 93)
                printf("p");
        }
        printf("\n");
        memset(str,'\0',1000);
    }
    return 0;
}
