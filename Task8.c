#include<stdio.h>
int main()
{
    int num=0;
    int i;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Your multification table is: \n");
    for(i=1;i<=10;i++)
    {
        printf("%d * %d = %d\n",num,i,num*i);
        
    }
    return 0;
}
