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
    int m=(size/2)+1;
    printf("%d",m);
    double det[size+1][m];
    printf("\nSIZE=%d, %d",size+1,m);
    int i,j;

     // fill up with all zeros
     for(i=0;i<(size+1);i++)
        for(j=0;j<m;j++)
            det[i][j]=0;

     // fill up the first two rows
        i=0;
        for(j=0,i=0;(j<m)&&(i<=size);j++)
	{
            det[0][j]=*(ptr+(i++));
	    if(i<=size)
	    det[1][j]=*(ptr+(i++));
	
         }
         int zero_row;
	// fill up subsequent rows
       for(i=2;i<=size;i++)
        {
       // check if the previous row is zeros
        zero_row=1;
        double power=0;
        for(j=0;j<(m-1);j++)
         {
           if(det[i-1][j]!=0)
              {zero_row=0; break;}
         }
         printf("ZERO ROW=%d\n",zero_row);
        if(zero_row==1)
        // if the row is zero then find derivative
       {
         power=(size-(i-2));
        for(j=0;j<(m-1);j++)
         { 
           det[i-1][j]=power*det[i-2][j];
           power=power-2;
         }
       }
        for(j=0;j<(m-1);j++)

	{
             if(det[i-1][j]==0 && j==0) //first term of column zero
              det[i-1][j]=0.0001;
             if (det[i-1][j]!=0)
             det[i][j]= ((det[i-1][j]*det[i-2][j+1])-(det[i-2][j]*det[i-1][j+1]))/det[i-1][j];
	
         }
         }

     for(i=0;i<(size+1);i++)
	{
	printf("\n[");
        for(j=0;j<m;j++)
            printf("%lf\t",det[i][j]);
	printf("]\n");
	}
      
    //Check for sign changes in the first column
    int prev_sign=0,changes=0,cur_sign=0;
    if(det[0][0]>0)
	prev_sign=1; //positive
    else
	prev_sign=0;  //negative
     for(i=1;i<(size+1);i++)
     {
	if((det[i][0]>0&&prev_sign==0)||(det[i][0]<0)&&prev_sign==1)
          {
    changes++; 
    if(det[i][0]>0)
	prev_sign=1; //positive
    else
	prev_sign=0;  //negative          
     }
}
   printf("\n Sign changes %d \n",changes);

    
}



int main()
{
    int n,i,choice;
    double val;

    printf("Enter the degree of the polynomial(2-20) \n");
    scanf("%d",&n);
    double char_eqn[n];
    double* ptr=charact_eqn(n,char_eqn);
    for(i=0;i<=n;i++)
    printf("%lf\n",*(ptr+i));

    printf("to display output press 1\nto display routh array press 2\n");
    scanf("%d",&choice);

    function(ptr,choice,n);
    
    return 0;
}
