/* Task description:
A twin prime is a prime number that is either 2 less or 2 more than another prime number - for example, either member of the twin prime pair (41, 43). 
In other words, a twin prime is a prime that has a prime gap of two.

The first couple of twin primes are (3, 5), (5, 7) and (11, 13). Write a C program to find the 60th twin prime! 
Extend the program to check whether the number between the twin primes has any digit equal to 5. 
Avoid code duplication, use functions wherever reasonable! Follow the top-down design methodology.
Top-down: when solving programming problems by breaking them down into smaller and smaller sub-problems until each one is trivial or known

*/


#include <stdio.h>
int prime(int p){
  for(int i=2; i<p; i += 1){
    if(p%i == 0)
      return 0;
  }
  if (p<3)
    return 0;
  else
    return 1;
}
int five(int f){
  while (f>0){
    if (f%10 == 5)
      return 1;
    f = f/10;
  }
  return 0;
}

int main(){
int n = 0, i = 1;
while(n<60){
  if (prime(i) == 1 && prime(i+2) == 1){
    n += 1;
    }
  i += 1;
}
if (five(i)==1){
  printf("It has a 5 in it\n}");
}
else {
printf("It has no 5 in it\n");
}

printf("The 60th prime twins are %d and %d", i-1, i+1);
return 0;

}