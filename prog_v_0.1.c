#include <stdio.h>

int main(void)
{
    short a = 0, b = 0, c = 0;
    double S = 0;

    fprintf(stdout, "Please, enter the first leg >> ");
    fscanf(stdin, "%hd", &a);
    fprintf(stdout, "Please, enter the second leg >> ");
    fscanf(stdin, "%hd", &b);
    fprintf(stdout, "Please, enter the hypotenuse >> ");
    fscanf(stdin, "%hd", &c);
    S = a * b / 2;
    fprintf(stdout, "The area of this triangle is: %f\n", S);
    return 0;
}
