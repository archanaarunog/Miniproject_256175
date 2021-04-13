#include <stdio.h>
#include <stdlib.h>
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

double initialize_two_rows(int m, int size, double *routh_array)
{
     // fill up the first two rows
    
    for (j = 0, i = 0; (j < m) && (i <= size); j++)
    {
        routh_array[0][j] = *(ptr_to_charact_eqn + (i++));
        if (i <= size)
            routh_array[1][j] = *(ptr_to_charact_eqn + (i++));
    }
    
}
int function(double *ptr_to_charact_eqn, int choice, int size)
{
    int m = (size / 2) + 1;
    double routh_array[size + 1][m];
    if(choice==2)
    printf("\nROUTH ARRAY SIZE=%dX%d\n", size + 1, m);
    int i, j;
    double *ptr_to_routh=&routh_array[0][0];
    initialize_routh_array(m, size, ptr_to_routh); 
    initialize_two_rows(m,size, ptr_to_routh);
    
   
    int zero_row;
    // fill up subsequent rows
    for (i = 2; i <= size; i++)
    {
        // check if the previous row is zeros
        zero_row = 1;
        double power = 0;
        for (j = 0; j < (m - 1); j++)
        {
            if (routh_array[i - 1][j] != 0)
            {
                zero_row = 0;
                break;
            }
        }
        printf("ZERO ROW=%d\n", zero_row);
        if (zero_row == 1)
        // if the row is zero then find derivative
        {
            power = (size - (i - 2));
            for (j = 0; j < (m - 1); j++)
            {
                routh_array[i - 1][j] = power * routh_array[i - 2][j];
                power = power - 2;
            }
        }
        for (j = 0; j < (m - 1); j++)

        {
            if (routh_array[i - 1][j] == 0 && j == 0) //first term of column zero
                routh_array[i - 1][j] = 0.0001;
            if (routh_array[i - 1][j] != 0)
                routh_array[i][j] = ((routh_array[i - 1][j] * routh_array[i - 2][j + 1]) - (routh_array[i - 2][j] * routh_array[i - 1][j + 1])) / routh_array[i - 1][j];
        }
    }

    for (i = 0; i < (size + 1); i++)
    {
        printf("\n[");
        for (j = 0; j < m; j++)
            printf("%lf\t", routh_array[i][j]);
        printf("]\n");
    }

    //Check for sign changes in the first column
    int prev_sign = 0, changes = 0, cur_sign = 0;
    if (routh_array[0][0] > 0)
        prev_sign = 1; //positive
    else
        prev_sign = 0; //negative
    for (i = 1; i < (size + 1); i++)
    {
        if ((routh_array[i][0] > 0 && prev_sign == 0) || (routh_array[i][0] < 0) && prev_sign == 1)
        {
            changes++;
            if (routh_array[i][0] > 0)
                prev_sign = 1; //positive
            else
                prev_sign = 0; //negative
        }
    }
    printf("\n Sign changes %d \n", changes);
}

/**
 * @brief Main function 
 * 
 * @return int 
 */
int main()
{
    int n, i, choice;
    printf("Enter the degree of the polynomial(3-20) \n");
    scanf("%d", &n);
    double char_eqn[n];
    double *ptr_to_charact_eqn = charact_eqn(n, char_eqn);
    for (i = 0; i <= n; i++)
        printf("%lf\n", *(ptr_to_charact_eqn + i));

    printf("To display output press 1\nTo display routh array press 2\n");
    scanf("%d", &choice);
    function(ptr_to_charact_eqn, choice, n);
    return 0;
}
