#include<function.h>
/**
 * @brief  Finding stability by checking for sign changes in the first column 
 *  Number of sign changes = number of poles lying on the right half of the s plane and hence system unstable
 * @param m Number of columns in routh_array matrix
 * @param size Number of rows in routh_array matrix
 * @param routh_array The 2 dimensional matrix ie routh_array
 * @return double 
 */

double check_criteria(int m,int size, double* routh_array)
{
    //Check for sign changes in the first column
    int prev_sign = 0, changes = 0, cur_sign = 0,i;
    if (*(routh_array) > 0)
        prev_sign = 1; //positive
    else
        prev_sign = 0; //negative
    for (i = 1; i < (size + 1); i++)
    {
        if ((*(routh_array+i*m) > 0 && prev_sign == 0) || (*(routh_array+i*m) < 0) && prev_sign == 1)
        {
            changes++;
            if (*(routh_array+i*m) > 0)
                prev_sign = 1; //positive
            else
                prev_sign = 0; //negative
        }
    }
    if(changes>0)
    {
    printf("\nSystem unstable\n");
    printf("Number of poles present on the right half of s plane = %d \n", changes);
    }
    else
    printf("\nSystem is stable\n");

}