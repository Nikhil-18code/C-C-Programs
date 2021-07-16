#include<stdio.h>
#include<String.h>

int main()
{
    printf("Enter the first string:");
    char dest[50];
    scanf("%s",&dest);
    printf("Enter the  second string:");
    char src[50];
    scanf("%s",src);
    strcat(dest,src);
    printf("%s",dest);
    //char str2[100]=str + str1;
   
    return 0;
}