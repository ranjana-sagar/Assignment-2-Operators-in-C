#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter two number:");
    scanf("%d%d",&a,&b);
    printf("a=%d b=%d\n",a,b);
    a+=b;
    b=a-b;
    printf("value of a is %d and value of b is %d",a-b,b);
    getch();
    return 0;
}