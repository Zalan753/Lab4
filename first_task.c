/* Task description:

Write functions that receive a real number parameter, and return:

    cube() – its third power,
    absolute() – its absolute value (there is a fabs() library function but do not use it this time)! 

Write a program that tabulates the values of a, a3, |a| and sin(a) using 4 decimal digits after the decimal point from a = −1 to +1, stepping by 0.1! Include math.h to use sin.

*/
#include <stdio.h>
#include <math.h> 
double cube(double c){
  return c*c*c;
}
double absolute(double a){
  if (a < 0){
    return -a;
  }
  else {
    return a;
  }
}
int main(){
  for(double i = -1.0; i<=1; i = i+0.1){
    printf("%lf\t%lf\t%lf\t%lf\n", i, cube(i), absolute(i), sin(i));
  }
  return 0;
}
//<-- Function header, input parameters and output type in this form oType NAME(iType1 iName1,iType2 iName2,...)
//here starts what to do

//reurn with the result of the funcion (if any)
//that closes the function

/*Write the other functions here:*/
