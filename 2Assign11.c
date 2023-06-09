#include<stdio.h>
#include<conio.h>
int main()
{
    int n,d;
    printf("Enter a number");
    scanf("%d",&n);
    printf("Enter a digit only");
    scanf("%d",&d);
    printf("new number is %d",n*10+d);
    getch();
    return 0;
}