#include<stdio.h>
double average (double a,double b)
{
    return (a+b)/2;
}
int main ()
{
    double x,y;
    printf("Enter two numbers:\n ");
    scanf("%lf%lf",&x,&y);
    printf("Average of %lf and %lf:%lf\n",x,y,average(x,y));
    return 0;
}