// CODE:-
#include<stdio.h>
int main()
{
  float a1,a2,a3,avg,sum;
  printf("Enter the First Number :- " );
  scanf("%f",&a1);
  printf("Enter the Second Number :- " );
  scanf("%f",&a2);
  printf("Enter the Third Number :- " );
  scanf("%f",&a3);
  
  sum = a1+a2+a3;
  avg = sum/3;
  
  printf( "The Average of the inputed Three Numbers is %f " , avg );
    
  return 0;
}




//OUTPUT:-

/*
Enter the First Number :- 12
Enter the Second Number :- 13
Enter the Third Number :- 10
The Average of the inputed Three Numbers is 11.666667

*/
