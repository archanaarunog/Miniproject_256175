#ifndef __FUNCTION_H__
#define __FUNCTION_H__

#include <stdio.h>
#include <stdlib.h>

double *charact_eqn(int n, double *char_eqn);

double initialize_routh_array(int m,int size, double *routh_array);

double initialize_two_rows(int m, int size, double *routh_array, double * ptr_to_charact_eqn);

double build_routh_array(int m, int size, double *routh_array);

double print_routh_array(int m, int size, double *routh_array);

double check_criteria(int m,int size, double* routh_array);

int routh_hurwitz_function(double *ptr_to_charact_eqn, int size);

#endif
