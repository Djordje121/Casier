/**
 * Takes input from user in dollars
 * Calculates smallest posible amount of coins needed to return change
 * */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "system.h"
#include "casier.h"

#define MAX_COINS 4

int main(void)
{  
    float dollars;
    do
    {
       printf("enter change: ");
       dollars = get_float();

    }
    while(dollars <= 0);   // input validation
    

    int cents = (int)round(dollars * 100);
    Coin *coins = malloc(sizeof(Coin) * MAX_COINS);
    coins = get_change(coins, 0, cents);

    if(coins == NULL)
    {
        printf("error\n");
        return 1;
    }
    for(int i = 0 ; i < MAX_COINS; i++)
    printf("%s: %i\n",(coins + i)->name, (coins + i)->amount);

    free(coins);
    return 0;
}


 // inherit.doc <see = "casier.h"/>
Coin *get_change(Coin *coins, int index, int cents)
{    
    if(cents == 0 || coins == NULL)
    return coins;

    if(index == 0)
    {
    int i = 0;
    (coins + i)->name = "QUARTERS";
    (coins + i)->value = QUARTERS;
    i++;
    (coins + i)->name = "DIMES";
    (coins + i)->value = DIMES;
    i++;
    (coins + i)->name = "NICKLES";
    (coins + i)->value = NICKLES;
    i++;
    (coins + i)->name = "PENNIES";
    (coins + i)->value = PENNIES;
    }

    (coins + index)->amount = cents / (coins + index)->value;
    return get_change(coins, index + 1, cents % (coins + index)->value);

}
