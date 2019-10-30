#include<stdio.h>
int main()
{
    float c;
    float f;
    printf("Enter temperature in Celsius: ");
    scanf("%f",&c);
    f=((9*c)/5)+32;
    printf("Entered temperature in Fahrenheit: %f",f);
    return 0;
}
