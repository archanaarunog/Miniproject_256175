#include<stdio.h>
#include<stdlib.h>
double* charact_eqn(int n, double *char_eqn)
{
    int i,j;   
    for(i=n,j=0;i>=0,j<=n;i--,j++)
    {
        printf("Enter the coefficient of s^%d :\n",i);
        scanf("%lf",&char_eqn[j]);
    }    
    return char_eqn;
}

int function(double *ptr, int choice,int size)
{
    int m=(size/2)+2;
    double det[size+1][m];
    int i,j;
    for(j=0;j<=m;j++)
    {
        for(i=0;i<2;i++)
        {
            if(j==m)
            {
                det[i][j]=0;
                printf("%d det %d\n",i,j);
            }
            else
            det[i][j]=*(ptr++); printf("%d  ptr %d\n",i,j);
        }
    }
    int lim=size;
    for(i=2;i<=size+1;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i<=lim)
            {
            det[i][j]=0;    
            lim--;
            }
            else
            {
                det[i][j]= ((det[i-1][j]*det[j][i-1])-(det[i-2][j]*det[i-1][j+1]))/det[i-1][j];

            }
        }
    }

    for(i=0;i<size+1;i++)
    {
    for(j=0;j<m;j++)
    {
        printf("%lf\t",det[i][j]);
    }
    printf("\n");
    }
    
}



int main()
{
    int n,i,choice;
    double val;

    printf("Enter the degree of the polynomial(2-20) \n");
    scanf("%d",&n);
    double char_eqn[n];
    double* ptr=charact_eqn(n,char_eqn);
    for(i=0;i<n;i++)
    printf("%lf\n",*(ptr+i));

    printf("to display output press 1\nto display routh array press 2\n");
    scanf("%d",&choice);

    function(ptr,choice,n);
    
    return 0;
}








