#include <cstdio>

int main()
{
    int n;
    scanf("%d",&n);     //输出的杨辉三角的层数。
    int num[n][n];
    for(int i=0;i<n;i++)    ////把第0列和对角线上的元素遍历为1
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
    for(int i=0;i<n;i++){               //遍历
        for(int j=0;j<=i;j++){
            printf("%d ",num[i][j]);
        }
        printf("\n");
    }

}
