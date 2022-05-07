#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

void main(){
    int inputDollars = 0;
    int twenties = 0, tens = 0, fives = 0, ones = 0;

    printf("Enter amount to pay: ");
    scanf("%d", &inputDollars);
    pay_amount(inputDollars, &twenties, &tens, &fives, &ones);

    printf("Twenties: %d\n", twenties);
    printf("Tens: %d\n", tens);
    printf("Fives: %d\n", fives);
    printf("Ones: %d\n", ones);

    return 0;
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones){

    while(dollars > 0){
        if(dollars >= 20){
            ++*twenties;
            dollars = dollars - 20;
        }
        if(dollars >= 10 && dollars < 20){
            ++*tens;
            dollars = dollars - 10;
        }
        if(dollars >= 5 && dollars < 10){
            ++*fives;
            dollars = dollars - 5;
        }
        if(dollars >= 1 && dollars < 5){
            ++*ones;
            dollars = dollars - 1;
        }
    }
}



