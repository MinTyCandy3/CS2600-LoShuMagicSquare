#include <stdlib.h> 
#include <stdio.h>
#include <time.h>

typedef enum { false, true } bool;


const int N = 3;

// functions here

// ** create a function that takes in a 2D array, and determine if it's a Lo Shu
// Checks if the 2D array is valid Lo Shu Magic Square
bool isLoShuMagicSquare(int square[N][N])
{

    // check if rows == 15
    for (size_t row = 0; row < N; row++)
    {
        int sum = 0;
        /* code */
        for (size_t col = 0; col < N; col++)
        {
            /* code */
            // printf("Row: %d, Col: %d\n", row, col);
            sum += square[row][col];
        }

        if(sum != 15)
        {
            return false;
        }
        
        // printf("Sum: %d\n\n", sum);
    }
    
    // check if cols == 15
    for (size_t col = 0; col < N; col++)
    {
        int sum = 0;
        /* code */
        for (size_t row = 0; row < N; row++)
        {
            /* code */
            // printf("Col: %d, Row: %d\n", col, row);
            sum += square[col][row];
        }

        if(sum != 15)
        {
            return false;
        }
        // printf("Sum: %d\n\n", sum);
    }

    // check if diags == 15

    // first diagonal
    int diagSum1 = 0;
    for (size_t i = 0; i < N; i++)
    {
        diagSum1 += square[i][i];
    }

    // second diagonal
    int diagSum2 = 0;
    for (size_t i = 0; i < N; i++)
    {
        /* code */
        diagSum2 += square[i][(N-1) - i];
    }
    // printf("Diagonal 1: %d\nDiagonal 2: %d\n", diagSum1, diagSum2);
    if(diagSum1 != 15 || diagSum2 != 15)
    {

    }
    

    return true;
}

// function that populates an empty 2D array with random numbers
int** populateSquare()
{
    srand(time(NULL));
    int previousNums[] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    int **square;

    square = malloc(sizeof(int*) * N);
    for(size_t i = 0; i < 3; i++) { 
        square[i] = malloc(sizeof(int*) * 3); 
    } 

    // check if rows == 15
    for (size_t row = 0; row < N; row++)
    {
        /* code */
        for (size_t col = 0; col < N; col++)
        {
            /* code */
            int randomNum = rand() % 9 + 1;
            bool isDuplicate = false;

            for (size_t i = 1; i <= 9; i++)
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

    return square;
}

void destroySquare(int** square)
{
    free(*square);
    free(square);
}