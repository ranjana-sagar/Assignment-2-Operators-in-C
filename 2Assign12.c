#include<stdio.h>
#include<conio.h>
int main()
{
    double i;
    float d;
    printf("Enter the amount in INR-");
    scanf("%lf",&i);
    d=i/76.23;
    printf("the amount %lf in INR are %f Dollar in USD",i,d);
    getch();
    return 0;
}