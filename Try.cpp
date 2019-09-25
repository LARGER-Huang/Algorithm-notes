#include <cstdio>

int main()
{
    int a[10]={4,2,1,7,2,0,5,2,6,99};
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int i=0;i<10;i++){
           printf("%d\n",a[i]);
    }

}
