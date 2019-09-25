#include <cstdio>
struct student{
    int id;
    char name[10];
    int grade1;
    int grade2;
    int grade3;
}stu[10];
void input(struct student stu[])        //输入学生信息
    {
        for(int i=0;i<10;i++){
            scanf("%d %s %d %d %d",&stu[i].id,&stu[i].name,&stu[i].grade1,&stu[i].grade2,&stu[i].grade3);
        }
    }
void outAvg(struct student stu[])       //输出平均值
    {
        double sum1,avg1;
        double sum2,avg2;
        double sum3,avg3;
        for(int i=0;i<10;i++)
        {
            sum1+=stu[i].grade1;
            sum2+=stu[i].grade2;
            sum3+=stu[i].grade3;
        }
        avg1=sum1/10;
        avg2=sum2/10;
        avg3=sum3/10;
        printf("%.2f %.2f %.2f\n",avg1,avg2,avg3);

    }

void outAvgMost(struct student stu[])
{
    double avg[10];
    double  maxAvg=0.0;
    int k;                          //记录最大平均分学生的位置
    for(int i=0;i<10;i++)
        avg[i]=(stu[i].grade1+stu[i].grade2+stu[i].grade3)/3.0;
    for(int i=0;i<10;i++)
    {
        if(avg[i]>maxAvg)
        {
            maxAvg=avg[i];
            k=i;
        }
    }
    printf("%d %s %d %d %d\n",stu[k].id,stu[k].name,stu[k].grade1,stu[k].grade2,stu[k].grade3);

}
int main()
{
    input(stu);
    outAvg(stu);
    outAvgMost(stu);

}
