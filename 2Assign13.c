#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter three digits number:");
    scanf("%d",&n);
    n=n%10*100+n/10;
    printf("%d is new number",n);
    getch();
    return 0;
}