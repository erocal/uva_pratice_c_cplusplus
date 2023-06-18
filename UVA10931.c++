#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

int main()
{
    int num,i=31,flag,ans;
    int str[100] = {'\0'};
    int two[100] = {'\0'};
    while(i--)
    {
        two[i] = pow(2,i);
    }
    scanf("%d",&num);
    while(num > 0)
    {
        printf("123﻿The parity of ");
        flag = 0;
        ans = 0;
        memset(str,'\0',100);
        for(i = 29 ; i > -1;i--)
        {
            if(num >= two[i])
            {
                num -= two[i];
                printf("1");
                flag = 1;
                ans++;
            }
            else if(flag == 1)
            {
                printf("0");
            }
        }
        printf(" is %d (mod 2).\n",ans);
        scanf("%d",&num);
    }
    return 0;
}
