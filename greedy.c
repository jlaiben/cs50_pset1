#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main (void){

    float amtDollar;
    int amtChange;
    int quarters = 0;
    //int amtRem = 0;
    int dimes = 0;
    int nickels = 0;
    int pennies = 0;
    //int amtRem2;

    //get & validate input
    do{
        amtDollar = get_float("Enter the amount of change you would like returned, in dollars & cents, no dollar signs (ie, 1.32):\n");
        if(amtDollar > 0){
            printf("Chaaaaaaaaaange. \n");
        }else{
            printf("Can't have negative dollars, bozo.  Try again.\n");
        }
    }while(amtDollar < 0);

    //convert dollars to cents
    amtChange = (amtDollar * 1000)/10;
    printf("You are owed %i cents. \n",amtChange);

    //change division: quarters
    if(amtChange >= 25){
        quarters = amtChange / 25;
        amtChange = amtChange % 25;
        //printf("Number of quarters: %i \n",quarters);
        //printf("Change remaining: %i cents \n",amtChange);
    }
    //change division: dimes
    if(amtChange >= 10){
        dimes = amtChange / 10;
        amtChange = amtChange % 10;
        //printf("Number of dimes: %i \n",dimes);
        //printf("Change remaining: %i cents \n",amtChange);
    }
    //change division: nickels
    if(amtChange >= 5){
        nickels = amtChange / 5;
        amtChange = amtChange % 5;
        //printf("Number of nickels: %i \n",nickels);
        //printf("Change remaining: %i \n",amtChange);
    }
    //and last the pennies pennies
    pennies = amtChange;
    //printf("Number of pennies: %i \n",pennies);

    printf("You will receive %i quarters, %i dimes, %i nickels, and %i pennies! \n",quarters,dimes,nickels,pennies);
}