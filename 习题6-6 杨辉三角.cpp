#include <cstdio>

int main()
{
    int n;
    scanf("%d",&n);     //�����������ǵĲ�����
    int num[n][n];
    for(int i=0;i<n;i++)    ////�ѵ�0�кͶԽ����ϵ�Ԫ�ر���Ϊ1
    {
        num[i][0]=1;
        num[i][i]=1;
    }
    for(int i=2;i<n;i++)
    {
        for(int j=1;j<=i-1;j++)
        {
            num[i][j]=num[i-1][j]+num[i-1][j-1];
        }
    }
    for(int i=0;i<n;i++){               //����
        for(int j=0;j<=i;j++){
            printf("%d ",num[i][j]);
        }
        printf("\n");
    }

}
