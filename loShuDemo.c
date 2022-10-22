#include <stdlib.h> 
#include <stdio.h>

typedef enum { false, true } bool;

/*

gcc loShuDemo.c loShuFunc.c

*/


// code main here
int main()
{
    bool isLoShuMagicSquare(int square[3][3]);


    // Test a Lo Shu Square here
    int ls[][3] = {
        {4, 9, 2},
        {3, 5, 7},
        {8, 1, 6},
    };

    bool isLoShu = isLoShuMagicSquare(ls);

    // Test a non-Lo Shu Square here
    int nls[][3] = {
        {4, 9, 2},
        {3, 5, 7},
        {8, 1, 6},
    };

    return EXIT_SUCCESS;
}

// Test populating 2D arrays and check and loop until Lo Shu