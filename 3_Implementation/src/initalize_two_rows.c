#include<function.h>

/*
 * @brief Store the first two rows with the co-efficients from the characteristic equation
 * 
 * @param m Number of columns in routh_array matrix
 * @param size Number of rows in routh_array matrix
 * @param routh_array The 2 dimensional matrix ie routh_array
 * @param ptr_to_charact_eqn Points to the first element of the charcateristic equation address
 * @return double Routh_array with co-efficients filled in
 */

double initialize_two_rows(int m, int size, double *routh_array, double * ptr_to_charact_eqn)
{
     // fill up the first two rows
    int i,j;
    for (j = 0, i = 0; (j < m) && (i <= size); j++,i++)
    {
        *(routh_array+j) = *(ptr_to_charact_eqn++);
        if (i <= size)
            *(routh_array+m+j) = *(ptr_to_charact_eqn++);
    }
    
}