#include <stdio.h>
#include "arith.h" 

int main(int argc, char const *argv[])
{
  printf("Fact: %d\n", fact(5));
  printf("Prime: %d\n", isprime(7));
  printf("Palindrome: %d\n", pal(5));
  return 0;
 }
