#include <cstdio>

int main()
{
    int num[10];
    for(int i=0;i<10;i++){
        scanf("%d",&num[i]);
    }
    for(int i=0;i<5;i++){
        int temp=num[i];
        num[i]=num[9-i];
        num[9-i]=temp;
    }
    for(int i=0;i<10;i++){
        printf("%d\n",num[i]);
    }
}
