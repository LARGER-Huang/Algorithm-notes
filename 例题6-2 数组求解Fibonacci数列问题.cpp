#include <stdio.h>

int main()
{
    int num[30]={1,1};
    for(int i=2;i<20;i++){
        num[i]=num[i-1]+num[i-2];
    }
    for(int i=0;i<20;i++){
        printf("%d\n",num[i]);
    }

}
