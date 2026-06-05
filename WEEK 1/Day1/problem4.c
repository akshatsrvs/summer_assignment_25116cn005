#include <stdio.h>
int main()
{
    int n, digit = 0;
     printf("enter the value of n:");
    scanf("%d", &n);
    int temp = n;
    do
    {
        digit++;
        n = n / 10;

    } while (n != 0);
    printf("The no. of digits in %d is %d",temp,digit);
    return 0;
}