// Author: Shakeb Siddiqui sms8508@psu.edu

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int digit_sum(int n) {
  if (n == 0) {
    return 0;
  }
  else {
    return n % 10 +digit_sum(n / 10);
  }
}
int main(void){
  int n = atof(readline("Enter an int: "));
  printf("sum of digits of %d is %d.\n", n , digit_sum(n));
}