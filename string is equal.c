#include<stdio.h>
#include<string.h>
int main ()
{
    char str1[]="sujon";
    char str2[]="sujon";
    int d = strcmp(str1,str2);
    if (d==0){

        printf("string is equal");

    }
    else
        printf("string is not equal");
    return 0;
}
