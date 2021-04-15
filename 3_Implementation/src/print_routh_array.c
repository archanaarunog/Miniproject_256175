#include<function.h>
/**
 * @brief Displaying the routh_array
 * @param m Number of columns in routh_array matrix
 * @param size Number of rows in routh_array matrix
 * @param routh_array The 2 dimensional matrix ie routh_array
 * @return double 
 */
double print_routh_array(int m, int size, double *routh_array)
{
        int i,j;
    for (i = 0; i < (size + 1); i++)
    {
        printf("\n[\t");
        for (j = 0; j < m; j++)
            printf("%lf\t", *(routh_array + i*m + j));
        printf("]\n");
    }
}