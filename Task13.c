#include <stdio.h>
int main()
{
    int i, n;
    float arr[100],large,small;
    printf("Enter total number of elements(1 to 100): ");
    scanf("%d", &n);
    printf("\n");
    for(i = 0; i < n; ++i)
    {
       printf("Enter Number %d: ", i+1);
       scanf("%f", &arr[i]);
    }
    large=small=arr[0];    
    for(i = 1; i < n; ++i)
    {
      if(arr[i]>large)
			large=arr[i];
		if(arr[i]<small)
			small=arr[i];
    }
    printf("Largest element = %.2f", large);
    printf("\nSmallest element = %.2f", small);
    return 0;
}