#include<function.h>
/**
 * @brief Create a routh array matrix and initialise all values to zero
 * 
 * @param m Number of columns in routh_array matrix
 * @param size Number of rows in routh_array matrix
 * @param routh_array The 2 dimensional matrix ie routh_array
 * @return double Initialised routh_array matrix
 */
double initialize_routh_array(int m,int size, double *routh_array) 
{
    int i,j;

    for (i = 0; i < (size + 1); i++)
        for (j = 0; j < m; j++)
            *(routh_array++) = 0;


}