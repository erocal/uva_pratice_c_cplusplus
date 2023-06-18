#include<stdio.h>
int main()
{
    int num,i;
    long long int num1;
    while(scanf("%d%lld",&num,&num1)!=EOF)
    {
        while((num1-num) > 0)
        {
            num1 -= num;
            num++;
        }
        printf("%d\n",num);
    }
    return 0;
}
