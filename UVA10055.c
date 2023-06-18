#include<stdio.h>
int main()
{
	long long int num,num1;
	while(scanf("%lld%lld",&num,&num1)!=EOF)
	{
		if(num1 >= num)
			printf("%lld\n",num1-num);
		else
			printf("%lld\n",num-num1);
	}
	return 0;
}
