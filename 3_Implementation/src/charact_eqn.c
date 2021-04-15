#include<function.h>

/**
 * @brief Function to store characteristic equation in array
 * 
 * @param n Degree of the polynomial
 * @param char_eqn Array to store the characteristic equation returned through pointer 
 * @return double* Return the characteristic equation array by its address 
 */
double *charact_eqn(int n, double *char_eqn)
{
    int i, j;
    for (i = n, j = 0; i >= 0, j <= n; i--, j++)
    {
        printf("Enter the coefficient of s^%d :\n", i);
        scanf("%lf", &char_eqn[j]);
    }
    return char_eqn;
}