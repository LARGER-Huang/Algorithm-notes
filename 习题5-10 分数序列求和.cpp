#include <stdio.h>

int main()
{
    double a=2.0;
    double b=1.0;
    double sum=0.0;
    double temp=0.0;

    for(int i=1;i<=20;i++)
    {
        sum=sum+(a/b);
        temp=a;
        a=a+b;
        b=temp;

    }
    printf("%f\n",sum);
}
