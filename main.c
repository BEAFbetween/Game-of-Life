#include <stdio.h>              // Test change
#include <stdlib.h>
#include <math.h>

#define NMAX 50

int rules(/* cell */);      // Will eventually be character, but for now use integer
int initial_board(x,y);

int main()
{
    struct {int x, int y} Board_size;

    printf("Board size?\n");
    scanf("%d %d", &Board_size.x, &Board_size.y);

    int board[Board_size.x][Board_size.y];

    board = (int) malloc(Board_size.x * Board_size.y * int);

    /*
    Nested for loops, initialising all array elements to 2 (to differentiate from dead cells during test).
    */



    /*
    Switch function:
    option 1 = set configurations
    option 2 = custom configuration
    default = exit program
    */

    /*
    for loop through specified number of generations, applying the rules function at each loop. Print at the start of each loop
    including the initial conditions (potentially create another function for this), then apply the rules function, then delete
    the previous output of the console.
    */
}

int rules(/* cell */){      // Will eventually be character, but for now use integer
                            // else if statements showing rules
}

int initial_board(x,y){
                            // Set 2D array to initial conditions and initialise
}
