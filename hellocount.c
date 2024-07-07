/* hellocount unit */

/*  Create a counter
    Do 
    Print a "Hello" statement
    Increment the counter for 10 more times
    While counter is less than 10, repeat

    Return the last counter state
*/

#include <stdio.h>

int hellocount(void)
{ 
    int i_counter=0;
    
    do 
 
        printf("Hello!!\n");
 
    while(i_counter++<10);
 
    return i_counter;
}