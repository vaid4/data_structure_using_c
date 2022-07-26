// write a c program to reverse a string using strrev() function.

#include<stdio.h>
#include<string.h>

int main()
{
    printf("Enter a string:\t");
    char s1[100];
    scanf("%s",s1);
    strrev(s1);
    printf("Reverse string is : ",s1);
    return 0;

}