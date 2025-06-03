#include <stdio.h>
int main()
{
    int n,result;
    printf("Enter n:");
    scanf("%d",&n);
    result=fact(n);
    printf("Factorial of %d is %d",n,result);
}
int fact(n)
{
    if(n==0) {
        return 1;
    }
    int fact=n*fact(n-1);
    return factorial
}
