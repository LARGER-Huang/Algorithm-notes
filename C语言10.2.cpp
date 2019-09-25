#include <cstdio>
void swap(int *p1,int *p2)      //Á½Êý½»»»
{
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
}
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int *p1=&a,*p2=&b,*p3=&c;
    if(a<b) swap(p1,p2);
    if(a<c) swap(p1,p3);
    if(b<c) swap(p2,p3);
    printf("%d %d %d \n",*p1,*p2,*p3);



}
