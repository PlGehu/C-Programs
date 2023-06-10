// Copying a string using strcpy:-

#include<stdio.h>
#include<string.h>
int main() {
char str1[50],str2[50];
printf("Enter string");
gets(str1);
strcpy(str2,str1);
puts(str2);
return 0; }
