#include <cstdio>
void input(int num[])           //����10����
{
    for(int i=0;i<10;i++){
        scanf("%d",&num[i]);
    }
}

void output(int num[])           //���10����
{
    for(int i=0;i<10;i++){
        printf("%d ",num[i]);
    }
    printf("\n");
}

void option(int num[])          //��������
{
    int Max=0,Min=0;
    int k=0;
    int j=0;
    for(int i=0;i<10;i++)
    {
        if(num[i]>=Max){
            Max=num[i];
            k=i;
        }

        if(num[i]<=Min){
            Min=num[i];
            j=i;
        }

    }
    int temp=num[k];
    num[k]=num[9];
    num[9]=temp;                //�������������һ�����Ի�

    temp=num[j];
    num[j]=num[0];
    num[0]=temp;                //��С�������һ�����Ի�
}
int main()
{
    int num[10];
    input(num);
    option(num);
    output(num);
}
