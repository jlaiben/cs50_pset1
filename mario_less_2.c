#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    int hash;
    int rows;
    int space;

    do{
        height = get_int("Enter the height of your half-pyramid, between 1 & 23 steps tall: \n");
        if (height > 0 && height < 24){
            printf("Valid input.\n");
        }
        else if (height <= 0 || height >= 24){
            printf("Invalid input.  Please try again.\n");
        }
        else{
            printf("Invalid input.  Please try again.\n");
        }
    }while (height <= 0 || height > 23);
    for(rows = 1; rows <= height; rows++){
        for(space = (height - rows); space > 0; space--){
            printf(" ");
        }
        for(hash = 1; hash <= rows; hash++){
            printf("#");
        }
        printf ("  ");
        for(hash = 1; hash <= rows; hash++){
            printf("#");
        }
        printf("\n");
    }
}