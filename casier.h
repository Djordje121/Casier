/**
 * simple library used for change calculation
 * inspired by <see="https://docs.cs50.net/2018/x/psets/1/cash/cash.html"/>
 */

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
*<params type ="struct"> pointer to Coin structure </params>
*<params type ="int"> index used for accsessing coins mem location </params>
*<params type ="int"> amount of change in cents </params>
*<returns> struct Coin pointer to alocated memory on succsess, else returns NULL </returns>
*/
Coin *get_change(Coin *coins, int index, int cents);

#endif