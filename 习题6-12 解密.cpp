#include <cstdio>
#include <string.h>

int main()
{
    char str[100];
    gets(str);
    for(int i=0;i<strlen(str);i++){
        if(('A'<=str[i])&&(str[i]<='Z'))
            str[i]='Z'-(str[i]-'A');
        else if(('a'<=str[i])&&(str[i]<='z'))
            str[i]='z'-(str[i]-'a');
    }
    puts(str);

}
