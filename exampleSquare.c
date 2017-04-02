/* "Modern C", by Jens Gustedt (2017) */
/* 0.Encounter: Listing 1.A first example of a C progrram (p. 2)  */
/* notice that "i" is not declared, yet the code compiles and runs */
#include <stdlib.h> 
#include <stdio.h>

int main(void)
{
    double A[5] = {
        [0] = 9.0,
        [1] = 2.9,
        [4] = 3.E+25,
        [3] = .00007,
    };
    for (size_t i = 0; i < 5; ++i) 
    {
        printf("element %zu is %g, \tits square is %g\n",
            i,
            A[i],
            A[i]*A[i]);
    }
    return  EXIT_SUCCESS;
}       