#include <stdio.h>

long factorial(int);

void main()
{
    int number;
    long fact=1;

    printf("Escreva um numero para calcular fatorial\n");
    scanf("%d", &number);

    printf("%d! = %ld\n", number, factorial(number));


}
long factorial (int n ){

    int c;
    long result = 1;

    for (c=1; c<=n; c++)
        result = result * c;

        return result;
    }
