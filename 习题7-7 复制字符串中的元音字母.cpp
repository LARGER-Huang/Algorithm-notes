#include <cstdio>
#include <string.h>
void Vowels(char str1[],char str2[]){
    int k=0;
    for(int i=0;i<strlen(str1);i++)
    {
        if(str1[i]=='a'||str1[i]=='e'||str1[i]=='i'||str1[i]=='o'||str1[i]=='u')
         {
             str2[k]=str1[i];
             k++;
         }
    }
    str2[k]='\0';
      puts(str2);
}
int main()
{
    char str1[20];
    char str2[20];
    gets(str1);
    Vowels(str1,str2);

}
