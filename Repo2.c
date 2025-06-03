int add(int *a,int *b);
int main()
{
    int a,b,result;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    result=add(&a,&b);
    printf("Addition of %d and %d is %d",a,b,result);
}
int add(int *a,int *b)
{
    int sum;
    sum=*a+*b;
    return sum;
}
