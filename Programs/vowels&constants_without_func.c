#include<stdio.h>
#include<string.h>
int main()
 {
 char str[50];
 int i=0,vow=0,con=0;
 printf("Enter a string:");
 gets(str);
 
 while(str[i]!='\0')
 {
 if(str[i]=='a' || str[i]=='A' || str[i]=='e' || str[i]=='E' || str[i]=='i' ||
str[i]=='I' ||str[i]=='o' || str[i]=='O' ||str[i]=='u' || str[i]=='U')
 vow++;
 else
 con++;
 i++;
 }
 
 printf("No. of vowels: %d",vow);
 printf("\nNo. of consonants: %d",con);
 return 0;
}
