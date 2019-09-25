#include <cstdio>
#include <string.h>
#include <math.h>
void exchage(char *a,char *b)
{
    char temp[20];
    if(strcmp(a,b)>0){
           strcpy(temp,a);
           strcpy(a,b);
           strcpy(b,temp);
    }
}
int main()
{
    char a[20],b[20],c[20];
    char *str1=a,*str2=b,*str3=c;
    gets(str1);
    gets(str2);
    gets(str3);
    exchage(str1,str2);
    exchage(str1,str3);
    exchage(str2,str3);
    puts(str1);
    puts(str2);
    puts(str3);
}
