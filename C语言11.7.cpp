#include <cstdio>
struct student{
    int id;
    char name[10];
    int grade1;
    int grade2;
    int grade3;
}stu[5];
void input(struct student stu[])
    {
        for(int i=0;i<5;i++){
            scanf("%d %s %d %d %d",&stu[i].id,&stu[i].name,&stu[i].grade1,&stu[i].grade2,&stu[i].grade3);
        }
    }
void output(struct student stu[])
    {
         for(int i=0;i<5;i++){
            printf("%d %s %d %d %d\n",stu[i].id,stu[i].name,stu[i].grade1,stu[i].grade2,stu[i].grade3);
        }
    }

int main()
{
    input(stu);
    output(stu);
}
