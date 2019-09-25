#include <cstdio>
#include <string.h>
struct person{
    char name[20];
    int count;
}leader[3]={"Li",0,"Zhang",0,"Fun",0};
int main()
{
    int n;
    scanf("%d",&n);
    char names[10];
    for(int i=0;i<n;i++){
       scanf("%s",names);
        for(int j=0;j<3;j++){   //±È½Ï
            if(strcmp(names,leader[j].name)==0)
                 leader[j].count++;
        }
    }
    printf("%s:%d\n",leader[0].name,leader[0].count);
    printf("%s:%d\n",leader[1].name,leader[1].count);
    printf("%s:%d\n",leader[2].name,leader[2].count);
}
