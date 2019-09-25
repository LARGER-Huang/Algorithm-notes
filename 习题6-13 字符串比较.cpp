#include <cstdio>
#include <string.h>

int main()
{
    char s1[50];
    char s2[50];
    int n;          //≈–∂œ÷µ
    gets(s1);
    gets(s2);
    for(int i=0;i<strlen(s1);i++){
        if(s1[i]==s2[i])
            continue;
        else if(s1[i]>s2[i])
            n=s1[i]-s2[i];
            else if(s1[i]<s2[i])
                    n=s1[i]-s2[i];
    }
    printf("%d\n",n);

}
