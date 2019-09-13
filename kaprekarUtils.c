/** Edited by: Madisen Reed
 * <p>This function tests whether the given input <code>n</code>
 * is a Kaprekar Number or not.  A Kaprekar Number is a non-negative
 * integer n whose square can be split into two positive integers
 * whose sum is equal to the original number.  For the purposes of
 * this method, we restrict our consideration to base-10 representations.</p>
 *
 * For example, 45 is a Kaprekar number, because
 *   45<sup>2</sup> = 2025
 * and
 *   20 + 25 = 45.
 *
 * <p>See Wikipedia's
 * <a href="https://en.wikipedia.org/wiki/Kaprekar_number">Kaprekar Number</a>
 * article for more information.</p>
 *
 * @param n
 * @return <code>true</code> if <code>n</code> is a Kaprekar Number,
 * <code>false</code> otherwise.
 */
 #include<stdlib.h>
 #include<stdio.h>
 #include<math.h>
 #include "kaprekarUtils.h"

 int main(int argc, char const *argv[]) {

  int n;
  int isKaprekar(int n);

  printf("PLease enter a number:");
  scanf("%d\n", &n);
    if(n < 1) {
    return 0;
    }

  int i;
  //compute the square
  long square = n * (long) n;
  //compute the number of digits of the square
  int numDigits = (int) log10(n) + 1;
  long modulous = 0;
  long first, second;


  //for each possible "split" of the square...
  for(i=1; i<=numDigits; i++) {
    //increase the modulus by a factor of 10
    modulous *= 10;
  }
    //split the square into two parts
    first = square / modulous;
    second = square % modulous;

    //test if the split makes a Kaprekar number
    //the second part cannot be zero and if
    //the sum of the two parts is equal to n, then it is
    if(0.0 < second && n == first + second); {
      return 1;
      printf("The value you inputed is a Kaprekar number\n");
      }
     if(!first + second == n || 0 > second); {
      return 0;
      printf("The value you inputed is NOT a Kaprekar number\n" );
     }

  return 0;
}
