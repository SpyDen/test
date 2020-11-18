#include <stdio.h>

int main(void)
{
    short a = 0, b = 0, c = 0;
    double S = 0;

    fprintf(stdout, "Please, enter the first leg >> ");
    while (fscanf(stdin, "%hd", &a) != 1 || a <= 0 || getchar() != '\n')
    {
        fprintf(stderr, "Sorry, but you have entered incorrect data!\n");
        while (getchar() != '\n')
        {
            continue;
        }
        fprintf(stdout, "Please, enter the first leg >> ");
    }


    fprintf(stdout, "Please, enter the second leg >> ");
    while (fscanf(stdin, "%hd", &b) != 1 || b <= 0 || getchar() != '\n')
    {
        fprintf(stderr, "Sorry, but you have entered incorrect data!\n");
        while (getchar() != '\n')
        {
            continue;
        }
        fprintf(stdout, "Please, enter the second leg >> ");
    }


    fprintf(stdout, "Please, enter the hypotenuse >> ");
    while (fscanf(stdin, "%hd", &c) != 1 || c <= 0 || getchar() != '\n')
    {
        fprintf(stderr, "Sorry, but you have entered incorrect data!\n");
        while (getchar() != '\n')
        {
            continue;
        }
        fprintf(stdout, "Please, enter the hypotenuse >> ");
    }


    S = a * b / 2;

    fprintf(stdout, "The area of this triangle is: %f\n", S);
    return 0;
}
