#include<function.h>
/**
 * @brief Find the entire routh_array matrix and checking the special cases 
 * case 1: entire row is zero, replace with derivative and proceed 
 * case 2: first element in column zero 
 * @param m Number of columns in routh_array matrix
 * @param size Number of rows in routh_array matrix
 * @param routh_array The 2 dimensional matrix ie routh_array
 * @return double routh_array fully calculated
 */

double build_routh_array(int m, int size, double *routh_array)
{
    int zero_row,i,j;
    // fill up subsequent rows
    for (i = 2; i <= size; i++)
    {
        // check if the previous row is zeros
        zero_row = 1;
        double power = 0;
        for (j = 0; j < (m - 1); j++)
        {
            if (*(routh_array+(i-1)*m + j) != 0)
            {
                zero_row = 0;
                break;
            }
        }
        if (zero_row == 1)
        // if the row is zero then find derivative
        {
            power = (size - (i - 2));
            for (j = 0; j < (m - 1); j++)
            {
                *(routh_array+(i-1)*m + j) = power * (*(routh_array+(i-1)*m + j));
                power = power - 2;
            }
        }
                for (j = 0; j < (m - 1); j++)

        {
            if (*(routh_array+(i-1)*m + j) == 0 && j == 0) //first term of column zero
                *(routh_array+(i-1)*m + j) = 0.0001;
            if (*(routh_array+(i-1)*m + j) != 0)
               *(routh_array+(i*m) + j) = ((*(routh_array+(i-1)*m + j) * (*(routh_array+(i-2)*m + j+1))) - ((*(routh_array+(i-2)*m + j)) * (*(routh_array+(i-1)*m + j+1))))/ (*(routh_array+(i-1)*m + j));
        }
    }
}