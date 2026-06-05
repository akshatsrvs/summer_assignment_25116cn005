// code for checking  a perfect number
#include <stdio.h>
int main()
{
    int num, factor, sum = 0;

    // enter the number you want to check

    printf("Enter the number you want to check:" );
    scanf("%d", &num);
    if (num <= 0)
    {
        printf("Entered number is not valid\n");
    }
    else
    {
        printf("The factors of %d are\n:",num );
        for (int i = 1; i <= num / 2; i++)
        {
            if ( num%i == 0)
            {
                printf("%d\n", i);
                sum = sum + i;
            }
        }
        printf("The sum of factors is %d\n", sum);
        if (num==sum)
        {
            printf("The number is a perfect number\n");
        }
        else{
            printf("The number is  not a perfect number");

        }
    }

    return 0;
}