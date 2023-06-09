#include<stdio.h>
#include<conio.h>
int main()
{
    int n,s=0;
    printf("Enter three digits number:");
    scanf("%d",&n);
    s+=n%10;
    n/=10;
    s+=n%10;
    n/=10;
    s+=n;
    printf("Sum of digits is %d",s);
    getch(); 
    return 0;
}