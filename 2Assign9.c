#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("Enter the number:");
    scanf("%d",&x);
    x/=10;
    printf("number is %d",x*10);
    getch();
    return 0;
}