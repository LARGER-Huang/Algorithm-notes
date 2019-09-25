#include <cstdio>
struct student{
    int num;
    char name[20];
    char sex;
    int age;
};
int main()
{
    int n;
    scanf("%d",&n);             //输入学生个数
    student stu[20];
    for(int i=0;i<n;i++){
        scanf("%d %s %c %d",&stu[i].num,&stu[i].name,&stu[i].sex,&stu[i].age);
    }
     for(int i=0;i<n;i++){
        printf("%d %s %c %d\n",stu[i].num,stu[i].name,stu[i].sex,stu[i].age);
    }


}
