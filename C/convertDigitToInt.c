  // convertDigitToInt.c
  // Chapter 5: Exploring Operators and Expressions
  // Learn C Programming, 2nd Edition
  //
  // Program to convert digit characters to their
  // numerical values and add them together (operations on
  // characters).


#include <stdio.h>


int main( void )  {
  char digit5 = '5';
  char digit8 = '8';

  int sumDigits = digit5 + digit8;
  printf( "digit5 + digit8 = '5' + '8' = %d (oh, dear!)\n" ,
          sumDigits );

  char value5 = digit5 - '0';   // get the numerical value of '5'
  char value8 = digit8 - '0';   // get the numerical value of '8'
  sumDigits = value5 + value8;
  printf( "value5 + value8 = 5 + 8 = %d\n" ,
          sumDigits );
  return 0;
}

  //  eof