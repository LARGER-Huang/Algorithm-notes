#include <cstdio>
struct school{
    int num;
    char name[10];
    char sex;
    char job;
    union{
        int cclass;
        char position[10];
    }category;
};
int main()
{
    int n;
    scanf("%d",&n);     //��Ա��
    school a[20];
    for(int i=0;i<n;i++)        //����
    {
        scanf("%d %s %c %c",&a[i].num,&a[i].name,&a[i].sex,&a[i].job);
        if(a[i].job=='s')
            scanf("%d",&a[i].category.cclass);
        else if(a[i].job=='t')
            scanf("%s",&a[i].category.position);
    }
        for(int i=0;i<n;i++)        //��ӡ
    {
         if(a[i].job=='s')
            printf("%d %s %c %c %d\n",a[i].num,a[i].name,a[i].sex,a[i].job,a[i].category.cclass);
         if(a[i].job=='t')
            printf("%d %s %c %c %s\n",a[i].num,a[i].name,a[i].sex,a[i].job,a[i].category.position);
    }
}
