/******************************************************************************

Nicolaus Bagas Denta
Test Technical Online Bootcamp Batch 18 Kloter 3 DumbWays.id
Soal Nomor 3

*******************************************************************************/
#include <stdio.h>

int main()
{
    int row, column, norrows = 10;
    char name[] = "DUMBWAYSID";
    for(row=0; row<norrows; row++){
        for(column=0;column<norrows; column++){
            if((row==column)||((row+column)==(norrows-1)))
            printf("%c",name[row]);
            else
            printf(" ");
        }
            printf("\n");
    }
        return 0;
    }
