#include<stdio.h>

int isprime( int n){
    if (n<2)
    return 0;
    for (int i = 2; i*i <= n; i++)
    {
        if (n%i == 0)
        {
          return 0;    
        }
        
    }
    return 1;
}

int main()
{int n,largest = -1;
    printf("enter a number :");
    scanf("%d",&n);

    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0 && isprime(i))
        {
            largest = i;
        }
        
    }
     printf("largest prime factor = %d\n ", largest);
     return 0;
    
}