#include<stdio.h>
int main()
{
     float a;
     float b;
     float c;
     printf("Enter your first subject number: ");
     scanf("%f",&a);
     printf("Enter your second subject: ");
     scanf("%f",&b);
     printf("Enter your third subject number: ");
     scanf("%f",&c);
     printf("--------------------------------");
     printf("\nYour total marks in three subjects\t: %f",a+b+c);
     printf("\nYour average marks in three subjects\t: %f",(a+b+c)/3);
     return 0;
}
