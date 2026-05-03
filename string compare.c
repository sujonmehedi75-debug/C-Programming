#include<stdio.h>
#include<string.h>
int main ()
{
    char str1[]="Mahedi hasan sujon";
    char str2[]= "sujon";
    int d =strcmp(str1,str2);
    if(d==0){
        printf("strings are equal");

}
else
    printf("strings are not equal");
return 0;
}
