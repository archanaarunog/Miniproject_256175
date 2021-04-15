#include<function.h>
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

