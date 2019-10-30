#include<stdio.h>
int main() 
{
    char a[10];
    char b[10];
    printf("Enter your first name: ");
    scanf("%s",&a);
    printf("Enter your last name: ");
    scanf("%s",&b);
    printf("--------------------------------");
    printf("\nYour name is: %s %s",a,b);
    return 0;
}
