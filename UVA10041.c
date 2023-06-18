#include<stdio.h>
int main()
{
	int i,num,x,j,num1,y,z,sw,finaa,ans = 0,ans1 = 0,ans2 = 0;
	int array[500]={'\0'};
	scanf("%d",&num);
	for(i=0 ; i < num ; i++)
	{
	    ans = 0;
	    ans1 = 0;
	    ans2 = 0;
		scanf("%d",&x);
		finaa = x/2;
		for(j=0 ; j < x ; j++)
		{
            scanf("%d",&num1);
			array[j] = num1;
		}
		for(y = 0; y < x ; y++)
        {
            for(z = y+1; z < x ; z++)
            {
                if(array[y] > array[z])
                {
                    sw = array[y];
                    array[y] = array[z];
                    array[z] = sw;
                }
            }
        }
        if( x % 2 == 0)
        {
            for(j=0 ; j < x ; j++)
            {
                if(j < finaa)
                {
                    ans1 += (array[finaa] - array[j]);
                }
                else if(j > finaa)
                {
                    ans1 += (array[j] - array[finaa]);
                }
            }
            finaa--;
            for(j=0 ; j < x ; j++)
            {
                if(j < finaa)
                {
                    ans2 += (array[finaa] - array[j]);
                }
                else if(j > finaa)
                {
                    ans2 += (array[j] - array[finaa]);
                }
            }
            if(ans1 > ans2)
            {
                ans = ans2;
            }
            else
            {
                ans = ans1;
            }
            printf("%d\n",ans);
        }
        else
        {
            for(j=0 ; j < x ; j++)
            {
                if(j < finaa)
                {
                    ans += (array[finaa] - array[j]);
                }
                else if(j > finaa)
                {
                    ans += (array[j] - array[finaa]);
                }
            }
            printf("%d\n",ans);
        }


	}
	return 0;
}
