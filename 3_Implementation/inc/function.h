#ifndef __FUNCTION_H__
#define __FUNCTION_H__

#include <stdio.h>
#include <stdlib.h>
/**
 * @brief Function to store characteristic equation in array variable 
 * 
 * @param n Degree of the polynomial
 * @param char_eqn Array to store the characteristic equation returned through pointer 
 * @return double* Return the characteristic equation array by its address 
 */
double *charact_eqn(int n, double *char_eqn);

/**
 * @brief Create a routh array matrix and initialise all values to zero
 * 
 * @param m Number of columns in routh_array matrix
 * @param size Number of rows in routh_array matrix
 * @param routh_array The 2 dimensional matrix ie routh_array
 * @return double Initialised routh_array matrix
 */

double initialize_routh_array(int m,int size, double *routh_array);

double initialize_two_rows(int m, int size, double *routh_array, double * ptr_to_charact_eqn);

double build_routh_array(int m, int size, double *routh_array);

double print_routh_array(int m, int size, double *routh_array);

double check_criteria(int m,int size, double* routh_array);

int routh_hurwitz_function(double *ptr_to_charact_eqn, int size);

#endif
