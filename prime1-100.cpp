#include<stdio.h>
int main()
{
	int i,j,count=0;
	for(i=1;i<=100;i++)
	{
		for(j=2;j<=i/2;j++)
		{
			if (i%j==0)
			{
				count++;
				break;
			}
		}
		if (count==0 && i!=1)
		{
			printf("%d ",i);
		}
	}
	return 0;
}
