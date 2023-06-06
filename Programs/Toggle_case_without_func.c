#include<stdio.h>
#include<string.h>
int main()
 {
 char str[80];
 int i;
 printf("Enter a string:");
 gets(str);
 
 i=0;
 while(str[i]!='\0')
 {
 if(str[i]>='A' && str[i]<='Z')
 str[i]=str[i]+32;
else if(str[i]>='a' && str[i]<='z')
 str[i]=str[i]-32;
i++;
 }
 
 
printf("Toggled string is ");
puts(str);
return 0;
}
