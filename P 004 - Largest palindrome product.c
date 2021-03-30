#include <stdio.h>
#define MIN3 100
#define MAX3 999


int main (void)
{
 int i, j, k, m;
 int subj;


 for (i = 9; i > 0; i--)
 {
  for (j = 9; j >= 0; j--)
  {
   for (k = 9; k >= 0; k--)
   {
    subj = k*1100 + j*10010 + i*100001; // create our test subject


    for (m = MAX3; m >= MIN3 ; m--)
    {
     if (subj % m) // if the number is not divisible go to the next value of m
      continue;

     int div = subj / m;
     if (div >= 100 && div <= 999) // we found our subject!
     {
      printf("Largest palindrome with 3 digit multipliers is %d", subj);
      return 1;
     }
    }
   }
  }
 }
 return 0;
}
