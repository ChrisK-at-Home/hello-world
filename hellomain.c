#include <stdio.h>

#include "hellocount.h"

int main(void)
{
    /*  Initialize the return code

        do the hellocount function

        Print the last value of hellocount incrementer

        Return
    */
    
    int i_RC=0;

    i_RC=hellocount();  
    
    i_RC=printf("%04u \n", i_RC);
    return(i_RC);

}