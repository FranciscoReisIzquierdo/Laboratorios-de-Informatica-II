#include <stdio.h>
#include <math.h>
int main( )
{
    int a, b, c, s;
    float area;
    printf ("Introduza os valores dos termos a, b e c\n");
    scanf ("%d %d %d", &a, &b, &c);

    if ((fabs (b-c)) < a && a < b+c)
    {
        printf("Triangulo possivel\n");

        if ((a == b) && (b == c) && (a == c))
            printf("Triangulo equilatero\n");

        else if ((a == b) || (b == c) || (a == c))
            printf("Triangulo isosceles\n");

        else printf("Triangulo escaleno\n");

        s = ((a + b + c) / 2);
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("Area do triangulo abc = %f\n", area);

                                                       }
    else printf ("Triangulo impossivel\n");

    return 0;

    }



