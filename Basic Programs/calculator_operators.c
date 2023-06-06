#include <stdio.h>
int main()
{
  int a , b , sum , sub, mult;
  float div;
  printf("Enter two numbers :- /n " );
  scanf("%d" , &a ,&b);
  sum = a+b;
  sub = a-b;
  mult = a*b;
  div = a/b;
  
  printf ("The Sum of the Two Numbers is :- %d " , sum);
  printf ("The Subtraction of the Two Numbers is :- %d " , sub;
  printf ("The Multiplication of the Two Numbers is :- %d " , mult );
  printf ("The Division of the Two Numbers is :- %d " , div);
          
  return 0;
 }
