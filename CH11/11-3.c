#include <stdio.h>

void main(){

//enter a fraction
int numerator, denominator, reduced_numerator, reduced_denominator;
printf("Enter a fraction: ");
scanf("%d/%d", &numerator, &denominator);
reduce(numerator, denominator, &reduced_numerator, &reduced_denominator);
printf("In lowest terms: %d/%d.", reduced_numerator, reduced_denominator);

}

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator){
    int R, gcd;

        while ((denominator % numerator) > 0)  {
            R = denominator % numerator;
            denominator = numerator;
            numerator = R;
        }
  gcd = numerator;
  *reduced_numerator = numerator / gcd;
  *reduced_denominator = denominator / gcd;
}


