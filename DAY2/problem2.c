#include<stdio.h>
int main(){
    int n,sum=0,d;
     printf("Enter the value for n:");
    scanf("%d", &n);
    while (n != 0)
    {
        d = n % 10;
        sum = sum + d;
        n = n / 10;
    }
     printf("sum of digits of given number is %d",sum);
     return 0;
     
}