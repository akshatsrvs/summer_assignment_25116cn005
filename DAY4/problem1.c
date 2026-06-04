// code for Fibonacci series
#include <stdio.h>
int main()
{
    int n, first = 0, second = 1, third = 0, next = 0;
    // assign the value for n for term till you want the series
    printf("Enter the value of n : ");
    scanf("%d", &n);
    int arr[n + 1], add;
    arr[0] = 0;
    arr[1] = 1;
    // condition for Fibonacci series
    for (int i = 2; i < n; i++)
    {
        next = first + second;
        first = second;
        second = next;
        arr[i] = next;
    }
    printf("Fibonacci series till %dth term is : ", n);
    for (int j = 0; j < n; j++)
    {
        printf("%d", arr[j]);
        if (j != n - 1)
        {
            printf(",");
        }
    }
    return 0;
}