
#include "system.h"

char *getstr()
{
   char *input = malloc(sizeof(char) * MIN_BYTES);
   int i = 0, len = MIN_BYTES - 1;
   while((*(input + i) = fgetc(stdin))  != '\n')
   {
       if(i == MAX_BYTES) // reached max size of use input
       break;

       if(i == len)
       {
         input = realloc(input, sizeof(char));
         len++;
       }
       i++;
   }
   input = realloc(input, sizeof(char));
   *(input + i) = '\0';
   return input;
}


float get_float()
{
    float n = 0;
    char *input = getstr();
    char *ptr;
    n = strtof(input, &ptr); 
     
    free(input);
    return n;
}
