#include<stdio.h>
#include<string.h>
int main()

{
 char a[50];
 int l;
 printf("Enter a string:");
 gets(a);
 l=strlen(a);
 printf("Length of string is: %d",l);
 return 0;

}
