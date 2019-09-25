#include <cstdio>

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int *Max;
    int *Min;
    if(a>b)
    {
        Max=&a;
        Min=&b;
    }
    else{
        Max=&b;
        Min=&a;
    }
    printf("%d %d\n",*Max,*Min);
}
