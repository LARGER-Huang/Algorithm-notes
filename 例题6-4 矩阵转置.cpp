#include <cstdio>

int main()
{
    int num1[2][3];
    int num2[3][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
              scanf("%d",&num1[i][j]);
        }
    }
     for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
              num2[i][j]=num1[j][i];
              printf("%d ",num2[i][j]);
        }
        printf("\n");
    }

}
