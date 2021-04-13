#include<function.h>

/**
 * @brief Function to return array using pointers
 * 
 * @param n Degree of the polynomial
 * @param char_eqn Pointer array to store the characteristic equation
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

double initialize_routh_array(int m,int size, double *routh_array) 
{
    int i,j;

    for (i = 0; i < (size + 1); i++)
        for (j = 0; j < m; j++)
            *(routh_array++) = 0;


}

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
    printf("Sign changes present = %d \n", changes);
    }
    else
    printf("\nSystem is stable\n");

}

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