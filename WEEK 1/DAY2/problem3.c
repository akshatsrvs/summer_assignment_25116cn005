#include<stdio.h>
int main(){
    int n,product=1,d;
     printf("Enter the value for n:");
    scanf("%d", &n);
    while (n != 0)
    {
        d = n % 10;
        product = product * d;
        n = n / 10;
    }
     printf("product of digits of given number is %d",product);
     return 0;
     
}