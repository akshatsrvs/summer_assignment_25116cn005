#include<stdio.h>
int main(){
    int n,i,factorial=1;
    printf("enter the value of n :");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        factorial = factorial*i;
    }
    printf("Factorial of n numbers is %d", factorial);
    return 0;
}