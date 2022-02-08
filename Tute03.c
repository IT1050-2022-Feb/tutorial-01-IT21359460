/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 10
sum = 1+2+3+...+10 = 55 */


#include <stdio.h>
int main() {
  int num;
  int sum = 0;
  
  printf("Enter number from 1 to n: ");
  scanf("%d", &num );
  
  while( 1 <= num )
        {
          sum = sum + num;
          num = num - 1; // num--
          }
  
          printf("sum = %d\n", sum);
  
  return 0;
}




