#include <cstdio>
#include <cmath>

int main()
{
    int n;
    scanf("%d",&n);     // ‰»În
    int num1=1;
    int num2=1;
    int temp;
    for(int i=1;i<n;i++)
    {
        temp=num2;
        num2=num1+num2;
        num1=temp;
    }
    printf("%d\n",num1);
    return 0;
}

