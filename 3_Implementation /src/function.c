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
/**
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
/**
 * @brief Creating routh_array matrix step wise by calling other functions 
 * Initialize all elements to zero->fill first two rows with co-efficients from char_eqn->find rest of the elements->printf matrix->check sign changes
 * @param ptr_to_charact_eqn Points to the first element of characteristic equation address
 * @param size The degree of the characteristic equation 
 * @return int 
 */
int routh_hurwitz_function(double *ptr_to_charact_eqn, int size)
{
    int m = (size / 2) + 1;
    double routh_array[size + 1][m];
    printf("\nROUTH ARRAY SIZE=%dX%d\n", size + 1, m);
    int i, j;
    double *ptr_to_routh=&routh_array[0][0];
    initialize_routh_array(m, size, ptr_to_routh); 
    initialize_two_rows(m,size, ptr_to_routh, ptr_to_charact_eqn);
    build_routh_array(m,size, ptr_to_routh);
    print_routh_array(m,size,ptr_to_routh);
    check_criteria(m,size,ptr_to_routh);
    return 0;
}