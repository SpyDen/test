#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define RED "\033[31m"
#define GREEN "\033[32m"

int main(void)
{
    short a = 0, b = 0, c = 0;
    double S = 0;

    fprintf(stdout, GREEN "Please, enter the first leg >> ");
    while (fscanf(stdin, "%hd", &a) != 1 || a <= 0 || getchar() != '\n')
    {
        fprintf(stderr, RED "Sorry, but you have entered incorrect data!\n");
        while (getchar() != '\n')
        {
            continue;
        }
        fprintf(stdout, GREEN "Please, enter the first leg >> ");
    }


    fprintf(stdout, GREEN "Please, enter the second leg >> ");
    while (fscanf(stdin, "%hd", &b) != 1 || b <= 0 || getchar() != '\n')
    {
        fprintf(stderr, RED "Sorry, but you have entered incorrect data!\n");
        while (getchar() != '\n')
        {
            continue;
        }
        fprintf(stdout, GREEN "Please, enter the second leg >> ");
    }


    fprintf(stdout, GREEN "Please, enter the hypotenuse >> ");
    while (fscanf(stdin, "%hd", &c) != 1 || c <= 0 || getchar() != '\n')
    {
        fprintf(stderr, RED "Sorry, but you have entered incorrect data!\n");
        while (getchar() != '\n')
        {
            continue;
        }
        fprintf(stdout, GREEN "Please, enter the hypotenuse >> ");
    }

    if (pow(a, 2) + pow(b, 2) != pow(c, 2))
    {
        fprintf(stderr, RED "Sorry, but there is not a right triangle!\n");
        exit(EXIT_FAILURE);
    }

    S = a * b / 2;

    fprintf(stdout, GREEN "The area of this triangle is: %f\n", S);
    return 0;
}
