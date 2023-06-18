#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    // 編譯會多出一格錯誤
    int num,i=31,flag,ans;
    int two[31]={'\0'};
    while(i--)
    {
        two[i] = pow(2,i);
    }
    scanf("%d",&num);
    while(num > 0)
    {
        printf("﻿The parity of ");
        flag = 0;
        ans = 0;
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

/*
#include<stdio.h>

int main(){

    int I;
    int i, j;

    while(scanf("%d", &I) && I){

        int P = 0;
        int bit[31] = {0};

        for(i = 0; I > 0; i++){
            if(I & 1){
                P++;
            }
            bit[i] = I & 1;
            I >>= 1;
        }

        printf("The parity of ");
        for(j = i - 1; j >= 0; j--){
            printf("%d", bit[j]);
        }
        printf(" is %d (mod 2).\n", P);
    }

    return 0;
}
*/
