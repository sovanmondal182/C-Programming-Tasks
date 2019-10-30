#include <stdio.h>
#include <math.h>
int main()
{
    int num, orig, rem, result = 0, n = 0 ;
    printf("Enter an integer: ");
    scanf("%d", &num);
     orig = num;
    
    while (orig != 0)
    {
        orig /= 10;
        ++n;
    }
    orig = num;
    while (orig != 0)
    {
        rem = orig%10;
        result += pow(rem, n);
        orig /= 10;
    }
    if(result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);
    return 0;
}