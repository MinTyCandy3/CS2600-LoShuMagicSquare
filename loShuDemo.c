#include <stdlib.h> 
#include <stdio.h>
#include <time.h>
#include <stdbool.h>

/*

gcc loShuDemo.c loShuFunc.c

*/


// code main here
int main()
{
    // defined in loShuFunc.c
    bool isLoShuMagicSquare(int square[3][3]);
    int** populateRandomSquare();
    void destroySquare(int** square);


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


    // Test populating 2D arrays and check and loop until Lo Shu
    int square[3][3];
    int previousNums[10];

    srand(time(NULL));


    while(true)
    {
        // check if rows == 15
        for (size_t row = 0; row < 3; row++)
        {
            /* code */
            for (size_t col = 0; col < 3; col++)
            {
                /* code */
                int randomNum = rand() % 9 + 1;
                bool isDuplicate = false;

                for (size_t i = 0; i < 9; i++)
                {
                    /* code */
                    if (randomNum == previousNums[i])
                    {
                        isDuplicate = true;
                    }
                }
                
                if(isDuplicate)
                {
                    col--;
                }
                else
                {
                    previousNums[randomNum] = randomNum;
                    square[row][col] = randomNum;
                }
            }
        }

        if(isLoShuMagicSquare(square))
        {
            break;
        }

        // resets previousNums
        for (size_t i = 0; i < 9; i++)
        {
            /* code */
            previousNums[i] = 0;
        }

    }

    // printf("Squares made until Lo Shu Square: ");
    printf("[%d, %d, %d]\n", square[0][0], square[0][1], square[0][2]);
    printf("[%d, %d, %d]\n", square[1][0], square[1][1], square[1][2]);
    printf("[%d, %d, %d]\n", square[2][0], square[2][1], square[2][2]);

    return EXIT_SUCCESS;
}