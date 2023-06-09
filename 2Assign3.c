#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("a=%d and b=%d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("value of a=%d and value of b=%d",a,b);
    getch();
    return 0;
}