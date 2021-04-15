#include<function.h>
/**
 * @brief Main function 
 * 
 * @return int 
 */
int main()
{
    int n, i,j;
    printf("Enter the degree of the polynomial(3-19) \n");
    scanf("%d", &n);
    double char_eqn[n];
    double *ptr_to_charact_eqn = charact_eqn(n, char_eqn);
    printf("Input Characteristic Equation is:\n");
    for (i = 0,j=n; i <= n,j>=0; i++,j--)
        printf("%lf s^%d + ", *(ptr_to_charact_eqn + i),j);
    printf("\n");
    routh_hurwitz_function(ptr_to_charact_eqn, n);
    return 0;
}


