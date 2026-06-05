// program to check if number is strong or not
#include <stdio.h>
int main()
{
    int num, temp, remainder, sum = 0, fact, i;

    //    take input from user
    printf(" enter a number: ");
    scanf("%d", &num);

    //  store original number in temp
    temp = num;

    //  loop to process each digit
    while (temp > 0)
    {
        // extract last digit
        remainder = temp % 10;

        // initialize factorial
        fact = 1;

        // calculate factorial using for loop
        for (i = 1; i <= remainder; i++)
        {
            fact *= i;
        }
        // add factorial to sum

        sum += fact;
        temp /= 10;
    }
    //   check if number is strong or not
    if (sum == num)
    {
        printf("%d is a strong number.\n", num);
    }
    else
    {
        printf("%d is not a strong number.\n", num);
    }
    return 0;
}