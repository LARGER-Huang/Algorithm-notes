#include <cstdio>
#include <string.h>

int main()
{
    char str1[20];
    char str2[20];
    char str3[20];
    gets(str1);
    gets(str2);
    gets(str3);
    if(strcmp(str1,str2)>0){
        if(strcmp(str1,str3)>0)
            puts(str1);
        else
            puts(str3);
    }
    else if(strcmp(str2,str3)>0)
        puts(str2);
        else
            puts(str3);
}
