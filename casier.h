
#ifndef CASIER_H
#define CASIER_H

#define QUARTERS 25
#define DIMES 10
#define NICKLES 5
#define PENNIES 1
#define BYTES 5

/**
 * custom struct typedef used to store Coin atributes
 */
typedef struct
{
char *name;
int amount;
int value;
}
Coin;

/**
*recusive function that calculates smallest amount of coins needed to return change
*returns struct Coin pointer to alocated memory on succsess, else returns NULL
*/
Coin *get_change(Coin *coins, int index, int cents);

#endif