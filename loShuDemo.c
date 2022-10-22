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
    printf("Lo Shu Square (should return True): ");
    int ls[][3] = {
        {4, 9, 2},
        {3, 5, 7},
        {8, 1, 6},
    };
    if(isLoShuMagicSquare(ls))
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }

    // Test a non-Lo Shu Square here
    printf("Non-Lo Shu Square (should return False): ");
    int nls[][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
    };
    if(isLoShuMagicSquare(nls))
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
    printf("\n");


    return EXIT_SUCCESS;
}

// Test populating 2D arrays and check and loop until Lo Shu