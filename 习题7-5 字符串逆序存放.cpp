#include <cstdio>
#include <string.h>

void Inverse(char str[])
{
    for(int i=0;i<strlen(str)/2;i++)
    {
        char temp=str[i];
        str[i]=str[strlen(str)-i-1];
        str[strlen(str)-i-1]=temp;
    }

}

int main()
{
    char str[20];
    gets(str);
    Inverse(str);
    puts(str);

}
