#include<stdio.h>
int main()
{
	int i=1,j=1,k=1;
	for(i=1;i<=5;i++)
	{
	
		if(i+j<=6)
		{
			for(k=1;k<=6-i;k++)
			{
				printf("%d",k);
			}
			
			printf("\n");
		}
	}
	return 0;
}