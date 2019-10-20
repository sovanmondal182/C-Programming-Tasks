#include<stdio.h>
int main()
{
	int f=0,c=0;
	char name1[10];
	char name2[10];
	printf("Enter your full name: ");
	scanf("%s",name1);
	scanf("%s",name2);
	int age=0;
	printf("Enter your age: ");
	scanf("%d",&age);
	long long n;
	printf("Enter your 10 digit phone number: ");
	scanf("%lld",&n);
	while(f!=1)
	{
		long long num=n;
		while(num!=0){
			num=num/10;
			c++;
		}
		if(c==10){
			f=1;
		}
		else
		{
			printf("The number entered is not a 10 digit number");
			printf("\nPlease enter a valid 10 digit phone number: ");
			scanf("%lld",&n);
			c=0;
		}
	}
	printf("--------------------------------");
	printf("\nYour name\t\t: %s %s",name1,name2);
	printf("\nYour age\t\t: %d",age);
	printf("\nYour phone number\t: %lld",n);
	return 0;
}


