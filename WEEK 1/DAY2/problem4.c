#include <stdio.h>
int main()
{
    int z = 0, n, d,temp;
    printf("Enter the value for n:");
    scanf("%d", &n);
    temp=n;
    while (n != 0)
    {
        d = n % 10;
        z = z * 10 + d;
        n = n / 10;
    }
    if (z==temp)
    {
        printf("The number %d is palindrome",z);

    }
    else{
        
        printf("The number  %d is not palindrome", z);
    }
    return 0;
}