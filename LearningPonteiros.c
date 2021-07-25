#include <stdio.h>

int main (void){

    int x = 10;
    double y = 20.50;
    char z = 'a';

    int *pX = &x;
    double *pY = &y;
    char *pZ = &z;

    printf("\nEndereco de x = %i \nValor de x = %i\n", pX, *pX);
    printf("\nEndereco de y = %i \nValor de y = %.2f\n", pY, *pY);
    printf("\nEndereco de z = %i \nValor de z = %c\n", pZ, *pZ);

    getchar();
    return (0);
}
